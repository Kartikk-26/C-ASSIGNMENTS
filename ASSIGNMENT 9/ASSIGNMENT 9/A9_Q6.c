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
	if(a+b>c     &&   a+c>b  &&   b+c>a) {
		printf("TRAINGLE IS VALID ");
	}
	else {
		printf("NOT A VALID  TRAINGLE ");
	}
	return 0;
}
