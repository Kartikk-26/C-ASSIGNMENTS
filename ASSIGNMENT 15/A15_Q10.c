#include<stdio.h>
int primefactor(int);
int main(){
	int a,number;
	printf("ENTER THE NUMBER \n");
	scanf("%d",&a);
	number=primefactor(a);
}
int primefactor(int a){
	int i;
	printf("PRIME FACTOR OF %d ARE . . . \n",a);
	for(i=2;1<a;i++){
		while(a%i==0){
			printf("%d",i);
			a=a/i;
		}
	}
//	printf(" \n");
}
