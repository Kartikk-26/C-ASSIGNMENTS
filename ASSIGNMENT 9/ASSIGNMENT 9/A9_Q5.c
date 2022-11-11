#include<stdio.h>
int main(){
	int a;
	printf("ENTER THE YEAR \n");
	scanf("%d",&a);
	if(a%4==0){
		printf("THE YEAR IS LEAP YEAR \n");
	}
	else {
		printf("YEAR IS NOT LEAP YEAR \n");
	}
	return 0;
}
