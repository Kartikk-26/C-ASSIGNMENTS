#include<stdio.h>
int oddfactor(int);
int main(){
	int a,number;
	number=oddfactor(a);
}
int oddfactor(int a){
	int i,sum=0;
	printf("PRINTING 10 ODD NUMBERS \n");
	for(i=1;i<=10;i++){
		printf("%d\n",2*i-1);
		sum=sum+2*i-1;
	}
	printf("SUM IS %d",sum);
}
