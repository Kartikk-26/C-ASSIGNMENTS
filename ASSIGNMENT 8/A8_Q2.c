#include<stdio.h>
int main(){
	int p,c,m,b,e;
	printf("ENTER THE MARKS OBTAINED IN PHYSICS \n");
	scanf("%d",&p);
	if (p>33){
		printf("PASS \n");
	}
	else {
		printf("FAIL \n");
	}
	printf("ENTER THE MARKS OBTAINED IN CHEMISTRY \n");
	scanf("%d",&c);
	if (c>33){
		printf("PASS \n");
	}
	else {
		printf("FAIL \n");
	}
	printf("ENTER THE MARKS OBTAINED IN MATHS \n");
	scanf("%d",&m);
	if (m>33){
		printf("PASS \n");
	}
	else {
		printf("FAIL \n");
	}
	printf("ENTER THE MARKS OBTAINED IN BIOLOGY \n");
	scanf("%d",&b);
	if (b>33){
		printf("PASS \n");
	}
	else {
		printf("FAIL \n");
	}
	printf("ENTER THE MARKS OBTAINED IN ENGLISH \n");
	scanf("%d",&e);
	if (e>33){
		printf("PASS \n");
	}
	else {
		printf("FAIL \n");
	}
	return 0;
}
