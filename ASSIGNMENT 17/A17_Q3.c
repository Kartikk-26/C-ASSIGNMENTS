#include<stdio.h>
int main(){
	int a,i;
	for(i=1;i<=10;i++){
		printf("ENTER THE NUMBER \n");
		scanf("%d",&a);
		if(a==10){
			printf("THE LOOP IS BREAK \n");
			break;
		}
	}
	return 0;
}
