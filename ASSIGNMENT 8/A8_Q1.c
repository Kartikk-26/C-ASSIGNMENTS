#include<stdio.h>
int main(){
	int a,b,c,n;
	printf("ENTER ANY 3 NUMBERS \n");
	scanf("%d %d %d",&a,&b,&c);
	if(a > b && a > c){
		printf(" %d is greatest \n",a);
	}
	else if (b > c){
		printf("%d is greatest \n",b);
	}
	else {
		printf("%d is greatest",c);
	}
	return 0;
} 
