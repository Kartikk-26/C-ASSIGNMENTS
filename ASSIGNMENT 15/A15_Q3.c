#include<stdio.h>
int check(int);
int main(){
	int a,number;
	int check();
	number=check(a);
}
int check(int a){
	printf("ENTER THE NUMBER \n");
	scanf("%d",&a);
	if(a%2==0){
		printf("THE NUMBER IS EVEN %d\n",a);
	}
	else{
		printf("0");
	}
//	return a;
}
