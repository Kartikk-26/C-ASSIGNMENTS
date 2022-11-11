#include<stdio.h>
int main(){
	int a;
	printf("ENTER THE NUMBER \n");
	scanf("%d",&a);
	while(a>0&&a<=10){
		printf("%d \n",a);
		a=a-1;
	}
	return 0;
}
