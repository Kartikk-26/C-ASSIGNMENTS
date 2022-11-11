#include<stdio.h>
int main(){
	int n,x,i;
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	if(n%i==0){
		x++;
		break;
	}
	if(x==2){
		printf("prime number ");
		//break;
	}
	else{
		printf("not a prime number");
		//break;
	}
	return 0;
}