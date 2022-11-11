#include<stdio.h>
int sumcube(int);
int main(){
	int a,number;
	number=sumcube(a);
}
int sumcube(int a){
	int i,b,sum=0;
	printf("ENTER HOW MANY CUBE OF NUMBER YOU WANT \n");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		printf("%d \n",i*i*i);
		sum=sum+i*i*i;
	}
	printf("SUM IS %d",sum);
	
}
