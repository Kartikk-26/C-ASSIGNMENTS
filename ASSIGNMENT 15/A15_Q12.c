#include<stdio.h>
int hcffactor(int);
int main(){
	int a,number;
	number=hcffactor(a);
}
int hcffactor(int a){
	int b,i;
	printf("ENTER THE TWO NUMBERS \n");
	scanf("%d %d",&a,&b);
	for(i=a<b?a:b;i>=1;i--){
		if(a%i==0 && b%i==0){
			printf("HCF OF TWO NUMBER IS %d",i);
			break;
		}
	}
}
