#include<stdio.h>
int main(){
	int a;
	int menu;
	printf("CHOOSE OPTION \n 1 ISOSCELES TRAINGLE \n 2 EQUILATERAL TRAINGLE \n");
	scanf("%d",&a);
	switch(a){
		case 1:{
			 isoscelestraingle();
			break;
		}
		case 2:{
			 equilateraltraingle();
			break;
		}
		default :{
			printf("INVALID DETAILS ");
			break;
		}
		
		
		
	}
	return 0;
}
void isoscelestraingle(){
	int a,b,c;
	printf("ENTER THE THREE SIDES \n");
	scanf("%d%d%d",&a,&b,&c);
	if(a == b && a == c && b == c ){
		printf("ISOSCELES TRAINGLE \n");
	}
	else{
	}
}
void equilateraltraingle(){
	int a,b,c;
	printf("ENTER THE THREE SIDES \n");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && b==c){
		printf("EQUILATERAL TRAINGLE ");
	}
	else{
		printf("SCALENE TRAINGLE ");
	}
}
