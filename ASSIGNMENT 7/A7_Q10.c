#include<stdio.h>
int main(){
	int a,b,c,n,x;
	printf("ENTER THE THREE SIDES OF TRAINGLE \n");
	scanf("%d%d%d",&a,&b,&c);
	x=a+b>c;
	if(n==x){
		printf("TRAINGLE IS VALID");
	}
	else{
		printf("NOT VALID TRAINGLE");
	}
	return 0;
}
