#include<stdio.h>
int main(){
	int a,i,sum=0;
	for(i=1;i<=5;i++){
		printf("ENTER THE NUMBER \n");
		scanf("%d",&a);
		if(a%2==1){
			sum=sum+a;
			continue;
		}
		else{
		printf("ENTERTED VALUE IS EVEN\n");
		continue;
		sum=sum+a;
		}	
	}
		printf("SUM IS %d \n",sum);
		//sum=sum+a;
}
