#include<stdio.h>
int main(){
	int a;
	printf("ENTER THE NUMBER \n");
	scanf("%d",&a);
	switch(a){
		case 1:{
			printf("GOOD \n");
			break;
		}
		case 2:{
			printf("BETTER \n");
			break;
		}
		case 3:{
			printf("BEST \n");
			break;
		}
		default :{
			printf("INVALID DETAILS");
			break;
		}
		
	}
	return 0;
}
