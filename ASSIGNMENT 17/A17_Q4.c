#include<stdio.h>
int main(){
	int a,i,sum=0;
	for(i=1;i<=10;i++){
		printf("ENTER THE NUMBER \n");
		scanf("%d",&a);
		if(a<0){
			printf(" VALUE IS NEGATIVE SO LOOP TERMINATES \n");
			break;
		}
	    sum=sum+a;
	}
		printf("SUM OF ALL NUMBERS ARE %d ",sum);
		return 0;
}
