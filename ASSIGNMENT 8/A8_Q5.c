#include<stdio.h>
int main(){
	int a;
	printf("ENTER ANY NUMBER \n");
	scanf("%d",&a);
	if(a>0){
		printf("POSITIVE NUMBER");
	}
	else if (a<0){
		printf("NEGATIVE NUMBER");
	}
	else if (a==0){
		printf("ZERO");
	}
	return 0;
}
