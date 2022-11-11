#include<stdio.h>
int main(){
	int a,b;
	printf("ENTER THE NUMBER \n");
	scanf("%d",&a);
	if(a%2==10){
		printf("unit digit is %d",a);
	}
	else {
		printf("0 UNIT DIGIT");
	}
	
	return 0;
}
