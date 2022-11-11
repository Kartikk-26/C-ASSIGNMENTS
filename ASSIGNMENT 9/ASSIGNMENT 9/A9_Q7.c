#include<stdio.h>
int main(){
	int a;
	int b;
	int c;
	printf("ENTER THE SIDE 1 \n");
	scanf("%d",&a);
	printf("ENTER THE SIDE 2 \n");
	scanf("%d",&b);
	printf("ENTER THE SIDE 3 \n");
	scanf("%d",&c);
	if(a==b || b==c || c==a){
		printf("TRAINGLE IS EQUILATERAL \n");
	}
	else if (a==b && b==c ){
		printf("TRAINGLE IS ISOSCELES \n");
	}
	else {
		printf("TRAINGLE IS SCALENE ");
	}
		
	return 0;
}
