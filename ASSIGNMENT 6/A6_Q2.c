#include<stdio.h>
int main(){
	int p,c,m,b,e;
	printf("ENTER THE MARKS OBTAINED IN PHYSICS \n");
	scanf("%d",&p);
	printf("ENTER THE MARKS OBTAINED IN CHEMISTRY \n");
	scanf("%d",&c);
	printf("ENTER THE MARKS OBTAINED IN MATHS \n");
	scanf("%d",&m);
	printf("ENTER THE MARKS OBTAINED IN BIOLOGY \n");
	scanf("%d",&b);
	printf("ENTER THE MARKS OBTAINED IN ENGLISH \n");
	scanf("%d",&e);
	printf("TOTAL MARKS ARE %d \n",p+c+m+b+e);
	printf("AVERAGE MARKS ARE %d",(p+c+m+b+e)/5);
	return 0;
	
}
