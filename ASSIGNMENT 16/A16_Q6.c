#include<stdio.h>
int factorial (int);
int main(){
	int a,i,number;
	number=factorial(a);
}
int factorial (int a){
	int x=1,i;
	printf("ENTER THE NUMBER \n");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		x=x*i;
	}
	printf("THE FACTORIAL OF %d IS %d",a,x,i);
}
