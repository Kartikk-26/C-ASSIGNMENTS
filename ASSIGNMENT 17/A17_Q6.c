#include<stdio.h>
int main(){
	int n,x,i,j;
	for(i=n;i<=j;i++){
	printf("enter the number\n");
	scanf("%d",&n);
	
	for(j=2;j<=10;j++){
	
	if(n%i==0){
		x++;

	}
	if(x==2){
		printf("prime number\n ");
		break;
	}
	else{
		printf("not a prime number\n");
		break;
	}
	
	}
	
	}
	return 0;
}
