#include<stdio.h>
int loop(int);
int main(){
	int a,i,number;
	number=loop(a);
}
int loop(int a){
	int i;
	printf("ENTER TILL WHERE YOU WANT N ODD NUMBERS \n");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		printf("%d\n",2*i-1);
	}
}