#include <iostream>
#include <algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
	double x1,x2,y1,y2;
	x1 = max(R1.x,R2.x);
	x2 = min(R1.x + R1.w,R2.x + R2.w);
	y1 = max(R1.y - R1.h,R2.y - R2.h);
	y2 = min(R1.y,R2.y);

if(x2 > x1 && y2 > y1){
	return (x2 - x1)*(y2 - y1);
}else return 0;
}

int main(){
	Rect R1 = {1,1,5,5};
	Rect R2 = {2,2,5,5};	
	cout << overlap(R1,R2);	
}