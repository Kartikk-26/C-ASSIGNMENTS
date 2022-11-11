#include<stdio.h>
int main(){
	int a;
	printf("1 POSITIVE TO NEGATIVE CONVERSION \n2 NEGATIVE TO POSITIVE CONVERSION\n ");
	scanf("%d",&a);
	switch(a){
		case 1:{
			int b;
			printf("ENTER YOUR POSITIVE NUMBER \n");
			scanf("%d",&b);
			printf("CONVERTED NUMBER FROM POSITIVE TO NEGATIVE IS %d \n",b*-1);
			break;
		}
		case 2:{
			int c;
			printf("ENTER YOUR NEGATIVE NUMBER \n");
			scanf("%d",&c);
			printf("CONVERTED NUMBER FROM NEGATIVE TO POSITIVE IS %d \n",c*-1);
			break;
		}
	}
	return 0;
}
