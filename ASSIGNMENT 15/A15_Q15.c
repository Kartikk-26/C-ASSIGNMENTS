#include<stdio.h>
int primenumber(int);
int main(){
	int a,number;
	number=primenumber(a);
}
int primenumber(int a){
	int x=2,i;
	printf("ENTER A NUMBER \n");
	scanf("%d",&a);
	while(a)
	{
		for(i=2;i<x;i++)
		if(x%i==0)
		break;
		if(i==x){
			printf("%d \n",x);
			a--;
		}
		x++;
	}
	
	
	
}
