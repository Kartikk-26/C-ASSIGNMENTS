#include<stdio.h>
int main(){
	int a,year,flag,leapyear;
	printf("ENTER THE MONTH NUMBER \n");
	scanf("%d",&a);
	switch(a){
		case 1:{
			printf(" JANUARY 31 Days");
			break;
		}
		case 2:{
			int (flag);
			if (flag==1){
				printf("FEBUARY 29 DAYS");
			}
			else{
				printf("FEBUARY 28 DAYS");
			}
			break;
		}
		case 3:{
			printf("MARCH 31 DAYS");
			break;
		}
		case 4:{
			printf("APRIL 30 DAYS");
			break;
		}
		case 5:{
			printf("MAY 31 DAYS");
			break;
		}
		case 6:{
			printf("JUNE 30 DAYS");
			break;
		}
		case 7:{
			printf("JULY 31 DAYS");
			break;
		}
		case 8:{
			printf("AUGUST 31 DAYS");
			break;
		}
		case 9:{
			printf("SEPTEMBER 30 DAYS");
			break;
		}
		case 10:{
			printf("OCTOBER 31 DAYS");
			break;
		}
		case 11:{
			printf("NOVEMBER 30 DAYS");
			break;
		}
		case 12:{
			printf("DECEMBER 31 DAYS");
			break;
		}
		default:{
			printf("INVAILD DETAILS");
			break;
		}		
	}
	return 0;
}
 leapyear(){
int year;
printf("ENTER THE YEAR \n");
	scanf("%d",&year);
	if(year%4==0){
		printf("THE YEAR IS LEAP YEAR \n");
	}
	else {
		printf("YEAR IS NOT LEAP YEAR \n");
	}
}
