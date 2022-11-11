#include<stdio.h>
int main(){
	int a,menu;
	printf("ENTER YOUR CHOICE \n 1: BURGER\n 2: FRENCH FRIES \n 3: PIZZA\n 4: SANDWICHES\n 5: INVALID CHOICE\n");
	scanf("%d",&a);
	//burger();
//	frenchfries();
//	pizza();
//	sandwiches();
	switch(a){
		case 1:{
			burger();
			break;
		}
		case 2:{
			frenchfries();
			break;
		}
		case 3:{
			pizza();
			break;
		}
		case 4:{
			sandwiches();
			break;
		}
		default:{
			printf("INVALID DETAILS \n");
			break;
		}
		
	}
	return 0;	
}
void burger(){
	int quantity;
	printf("ENTER THE QUANTITY \n");
	scanf("%d",&quantity);
	printf("YOUR ORDER WILL BE SERVED SHORTLY\n  YOUR TOTAL BILL IS %d\n THANK YOU FOR ORDERING WITH US \n",200*quantity);
}
void frenchfries(){
	int quantity;
	printf("ENTER THE QUANTITY \n");
	scanf("%d",&quantity);
	printf("YOUR ORDER WILL BE SERVED SHORTLY\n  YOUR TOTAL BILL IS %d\n THANK YOU FOR ORDERING WITH US \n",50*quantity);
}
void pizza(){
	int quantity;
	printf("ENTER THE QUANTITY \n");
	scanf("%d",&quantity);
	printf("YOUR ORDER WILL BE SERVED SHORTLY\n  YOUR TOTAL BILL IS %d\n THANK YOU FOR ORDERING WITH US \n",500*quantity);
}
void sandwiches(){
	int quantity;
	printf("ENTER THE QUANTITY \n");
	scanf("%d",&quantity);
	printf("YOUR ORDER WILL BE SERVED SHORTLY\n  YOUR TOTAL BILL IS %d\n THANK YOU FOR ORDERING WITH US \n",150*quantity);
}

