#include<stdio.h>
int main(){
	int a;
	leapyear();
	//printf("ENTER THE YEAR \n");
	//scanf("%d",&a);
	switch(a){
	case 1:{
		leapyear();
		break;
	}
	default :{
		printf("INVAILD YEAR ");
		break;
	}
	
}
return 0;
}
void leapyear(){
	
	int a;
	printf("ENTER THE YEAR \n");
	scanf("%d",&a);
	if(a%4==0){
		printf("THE YEAR IS LEAP YEAR \n");
	}
	//else {
	//	printf("YEAR IS NOT LEAP YEAR \n");
//	}


}
