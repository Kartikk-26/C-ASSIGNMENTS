#include<stdio.h>
int main(){
	int a,c;
	printf("ENTER THE UNIT CONSUMED \n");
	scanf("%d",&a);
	if(a<=50){
		c=a*50/100;
		printf("ELECTRICTY BILL IS %d \n",a*50/100);
	}
	else if (a<=100 && a>50){
		c=a*75/100;
		printf("ELECTRICTY BILL IS %d \n",a*75/100);
	}
	else if (a<=200 && a>100){
		c=a*120/100;
		printf("ELECTRICTY BILL IS %d \n",a*120/100);
	}
	else if (a>250){
		c=a*150/100;
		printf("ELECTRICTY BILL IS %d \n",a*150/100);
	}
	int x=a*20/100;
	printf(" ADDITIONAL CHARGE IS %d \n",x);
	printf("TOTAL BILL IS %d",x+c);
	return 0;
}
