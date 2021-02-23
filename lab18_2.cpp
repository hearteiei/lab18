#include<iostream>
#include<algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *r1,Rect *r2){
	double height,lenght;
	height=min(r2->x+r2->h,r1->x+r1->h)-max(r2->x,r1->x);
	lenght=min(r2->x+r2->w,r1->x+r1->w)-max(r2->x,r1->x);
	if(height<0||lenght<0){
		return 0;
	}
	else {return height*lenght;}




}
