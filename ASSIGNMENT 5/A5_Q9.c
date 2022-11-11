#include<stdio.h>
int main(){
	int p,c,m,b,e;
	printf("ENTER THE MARKS IN PHYSICS \n");
	scanf("%d",&p);
	printf("ENTER THE MARKS IN CHEMISTRY \n");
	scanf("%d",&c);
	printf("ENTER THE MARKS IN MATHS\n");
	scanf("%d",&m);
	printf("ENTER THE MARKS IN BIOLOGY\n");
	scanf("%d",&b);
	printf("ENTER THE MARKS IN ENGLISH \n");
	scanf("%d",&e);
	printf("AGGREGATE MARKS ARE %d",p+c+m+b+e);
	return 0;
}
