#include<stdio.h>
int main(){
	int a,i;
	printf("ENTER THE NUMBER \n");
	scanf("%d",&a);
//	int mod =a%10;
	//a=a/10;
	while(a){
		if(a!=0){
			int mod =a%10;
	        a=a/10;
			printf("%d",mod);
			
		}
	}
}
