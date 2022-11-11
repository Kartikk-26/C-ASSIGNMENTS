#include<stdio.h>
int main(){
	int a;
	printf("ENTER YOUR NUMBER \n");
	scanf("%d",&a);
	if (a%3==0){
		printf("INTEGER IS DIVISIBLE BY 3 \n");
	}
	else{
		printf("INTEGER IS NOT DIVISIBLE BY 3 \n");
	}
	if (a%7==0){
		printf("INTEGER IS DIVISIBLE BY 7 \n");
	}
	else{
		printf("INTEGER IS NOT DIVISIBLE BY 7");
	}
	return 0;
}
