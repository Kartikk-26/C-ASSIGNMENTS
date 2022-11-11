#include<stdio.h>
int main(){
	int a;
	printf("PRESS 10 \n");
	scanf("%d",&a);
	while(a>0){
		printf("%d\n",a);
		a=a-1;
	}
	return 0;
}
