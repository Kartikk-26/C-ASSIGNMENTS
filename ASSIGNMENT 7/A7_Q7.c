#include<stdio.h>
int main(){
	int a;
	printf("ENTER YOUR NUMBER \n");
	scanf("%d",&a);
	if (a%5==0){
		printf("INTEGER IS DIVISIBLE BY 5 \n");
	}
	else{
		printf("INTEGER IS NOT DIVISIBLE BY 5");
	}
	return 0;
}
