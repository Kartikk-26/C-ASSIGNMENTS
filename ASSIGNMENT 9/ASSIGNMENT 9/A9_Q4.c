#include<stdio.h>
int main(){
	int a;
	printf("ENTER THE NUMBER \n");
	scanf("%d",&a);
	if(a<0){
		printf("NEGATIVE NUMBER");
	}
	else if (a>0){
		printf("POSITIVE NUMBER \n");
		if (a%10==0){
			printf("DIVISBLE BY 10 \n");
		} 
		else{
			printf("NOT DIVISIBLE BY 10 \n");
		}
		
	}
	else if(a==0){
		printf("ZERO");
	}
	return 0;
	
}
