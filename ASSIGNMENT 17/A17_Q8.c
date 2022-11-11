#include<stdio.h>
int main(){
	int i,a,sum=0;
	for(i=1;i<=5;i++){
		printf("ENTER THE NUMBER \n");
		scanf("%d",&a);
		if(a<0){
			printf("ENTERED VALUE IS NEGATIVE \n");
			printf("ENTER THE NEW NUMBER \n");
			scanf("%d",&a);
			sum=sum+a;
			continue;
		}
		else{
			sum=sum+a;
			continue;
		}
	}

		printf(" SUM IS %d",sum);
}
