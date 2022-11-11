#include<stdio.h>
int main(){
	int a,b;
	int operation;
	printf(" ENTER TWO NUMBERS \n");
	scanf("%d %d",&a,&b);
	printf(" PRESS 1 FOR ADD\n PRESS 2 FOR DIFF\n PRESS 3 FOR MUL \n PRESS 4 FOR DIV\n");
	scanf("%d",&operation);
	
	switch(operation){
		case 1:{
			printf("SUM OF TWO NUMBER IS %d\n",a+b);
			break;
		}
		case 2:{
			printf("DIFFERENCE IF TWO NUM IS %d\n",a-b);
			break;
		}
		case 3:{
			printf("MULTIPLICATION OF TWO NUM IS %d\n",a*b);
			break;
		}
		case 4:{
			printf("DIVISION OF TWO NUM IS %d\n",a/b);
			break;
		}
		default:{
			printf("INVALID DETAILS \n");
			break;
		}
	}
	return 0;
	
	
	
	
}

