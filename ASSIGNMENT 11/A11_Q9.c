#include<stdio.h>
int main(){
	int a;
	printf("PRESS ANY KEY \n");
	scanf("%d",&a);
	while(a>0){
		printf("%d\n",a);
		a=a-1;
	}
	return 0;
}
