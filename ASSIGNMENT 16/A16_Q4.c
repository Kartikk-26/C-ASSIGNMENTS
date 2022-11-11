#include<stdio.h>
int sumsquare(int);
int main(){
	int a,number;
	number=sumsquare(a);
}
int sumsquare(int a){
	int i,b,sum=0;
	printf("ENTER HOW MANY SQUARE OF NUMBER YOU WANT \n");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		printf("%d \n",i*i);
		sum=sum+i*i;
	}
	printf("SUM IS %d",sum);
	
}
