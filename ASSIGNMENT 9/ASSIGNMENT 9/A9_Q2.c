#include<stdio.h>
int main(){
	int p,c,m,b,e;
	int x=p+c+m+b+e;
	
	printf("1.ENTER THE MARKS OF PHYSICS \n");
	scanf("%d",&p); 
	if(p>=33 && p<=100){
		printf("PASS \n");
	}
	else{
		printf("FAIL \n");
	}
	printf("2.ENTER THE MARKS OF CHEMISTRY \n");
	scanf("%d",&c);
	if(c>=33 && c<=100){
		printf("PASS \n");
	}
	else{
		printf("FAIL \n");
	}
	printf("3.ENTER THE MARKS MATHS \n");
	scanf("%d",&m);
	if(m>=33 && m<=100){
		printf("PASS \n");
	}
	else{
		printf("FAIL \n");
	}
	printf("4.ENTER THE MARKS OF BIOLOGY \n");
	scanf("%d",&b);
	if(b>=33 && b<=100){
		printf("PASS \n");
	}
	else{
		printf("FAIL \n");
	}
	printf("5.ENTER THE MARKS OF ENGLISH \n");
	scanf("%d",&e);
	if(e>=33 && e<=100){
		printf("PASS \n");
	}
	else{
		printf("FAIL \n");
	}
	x = p+c+m+b+e;
	printf("TOTAL MARKS ARE %d \n",x);
	
	if (x>=33 && x<=100){
		printf("IF PASSED THEN TOTAL MARKS OBTAINED IS %d",x);
	}
	return 0;
}
