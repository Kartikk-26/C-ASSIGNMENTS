#include<stdio.h>
int sumeven(int);
int main(){
	int a,number;
	number=sumeven(a);
}
int sumeven(int a){
	int i,sum=0;
	printf("PRINTING 10 EVEN NUMBERS \n");
	for(i=1;i<=10;i++){
		printf("%d\n",2*i);
		sum=sum+2*i;
	}
	printf("SUM IS %d",sum);
}
