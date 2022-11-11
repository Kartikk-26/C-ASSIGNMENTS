#include<stdio.h>
int main(){
	int a,b,x;
	printf("ENTER YOUR TWO NUMBERS \n");
	scanf("%d %d",&a,&b);
	if(a>b){
		printf("%d is greater than %d \n",a,b);
		if (a>=500 && a<=1000){
			printf(" VALUE OF NUMBER IS %d \n",a,b);
		}
	}
	else {
		printf("%d is greater than %d \n",b,a);
		if (a>=500 && a<=1000){
			printf(" VALUE OF NUMBER IS %d \n",a,b);
		}
	}

	return 0;
}
