#include<stdio.h>
int main(){
	int a,i;
	for(i=1;i<=5;i++){
		printf("ENTER THE NUMBER \n");
		scanf("%d",&a);
		if(a==0){
			break;
		}
		else if(a%10==0){
			continue;
		}
		else{
			printf("ENTERED VALUE  IS %d  \n",a);
		}
	}
	
	}

	
