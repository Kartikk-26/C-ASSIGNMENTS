#include<stdio.h>
int loop(int);
int main(){
	int a,number;
	number=loop(a);
}
int loop(int a){
	printf("ENTER TILL WHERE YOU WANT N NATURAL NUMBER\n");
	scanf("%d",&a);
	while(a>0){
		printf("%d\n",a);
		a=a-1;
	}
}
