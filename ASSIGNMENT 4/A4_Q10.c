#include<stdio.h>
int main(){
	int a;
	printf("ENTER THE TEMPERATURE IN FAHRENHEIT \n");
	scanf("%d",&a);
	printf(" CONVERTED TEMPERATURE IN CENTRIGRADE DEGREE IS %d",(a-32)*5/9);
	return 0;
}
