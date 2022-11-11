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
	if (a%2==0){
		printf("INTEGER IS DIVISIBLE BY 2 \n");
	}
	else{
		printf("INTEGER IS NOT DIVISIBLE BY 2");
	}
	return 0;
}
