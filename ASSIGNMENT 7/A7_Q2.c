#include<stdio.h>
int main(){
	int a,b,x,n;
	printf("ENTER ANY TWO NUMBERS \n",a);
	scanf("%d %d",&a,&b);
	printf("PRINT KEYS FOR THE FOLLOWING \n 1.PRINT THE SUM OF THE TWO NUMBERS \n 2.PRINT THE DIFFERENCE OF TWO NUMBERS \n 3.PRINT THE PRODUCT OF TWO NUMBERS \n 4.PRINT THE QUOTIENT OF TWO NUMBERS \n 5.PRINT THE NO OPERATION \n");
    scanf("%d",&n);
    if(n==1){
    	printf("SUM OF THE NUMBER IS %d",a+b);
	}
	if(n==2){
    	printf("SUM OF THE NUMBER IS %d",a-b);
	}
	if(n==3){
    	printf("SUM OF THE NUMBER IS %d",a*b);
	}
	if(n==4){
    	printf("SUM OF THE NUMBER IS %d",a/b);
	}
	if(n==5){
    	printf("NO OPERATION");
	}
   return 0;
}
