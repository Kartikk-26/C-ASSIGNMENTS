#include<stdio.h>
int circle(int);
int main(){
	int r,number;
	number=circle(r);
}
int circle(int r){
	//int r
	int Carea,pi=3;
	printf("ENTER THE RADIUS \n");
	scanf("%d",&r);
	Carea=pi*r*r;
	printf("AREA OF CIRCLE IS %d\n",Carea);
	return Carea;
}
