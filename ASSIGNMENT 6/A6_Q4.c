#include<stdio.h>
int main(){
	int d;
	printf("ENTER THE DISTANCE BETWEEN 2 CITIES IN KM \n");
	scanf("%d",&d);
	printf("CONVERTED DISTANCE INTO CM IS %d \n",d*100000);
	printf("CONVERTED DISTANCE INTO MM IS %d \n",d*1000000);
	printf("CONVERTED DISTANCE INTO INCHES IS %d \n",d*39370);
	return 0;
}
