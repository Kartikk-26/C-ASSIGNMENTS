#include<stdio.h>
int sumfactor(int);
int main(){
	int a,number;
	number=sumfactor(a);
}
int sumfactor(int a){
	int i,sum=0;
	printf("PRINTING SUM OF 10 NATURAL NUMBERS IS /n");
	for(i=1;i<=10;i++){
		printf("%d \n",i);
		sum=sum+i;
	}
	printf("THE SUM IS %d\n",sum);
}
