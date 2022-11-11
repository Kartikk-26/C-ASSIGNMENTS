#include<stdio.h>
int main(){
	int a,i,x=1;
	printf("ENTER THE NUMBER \n");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		x=x*i;
	}
	printf("THE FACTORIAL OF %d is %d",a,x);
	return 0;
}
	

