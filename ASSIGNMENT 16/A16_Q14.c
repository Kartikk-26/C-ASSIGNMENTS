#include<stdio.h>
int main(){
	//int a,i,b;
	int a,b,i;
	printf("ENTER THE TWO NUMBERS \n");
	scanf("%d %d",&a,&b);
	for(i=a<b?a:b;i>=1;i--){
		if(a%i==0 && b%i==0){
			printf("HCF OF TWO NUMBER IS %d\n",i);
			//break;
		}
		if(i==1){
			printf("NUMBER IS CO PRIME ");
		}
	}
	
}
