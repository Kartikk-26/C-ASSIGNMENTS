#include<stdio.h>
int lcmfactor (int);
int main(){
	int a,b,i,number;
	number=lcmfactor(a);
}
int lcmfactor(int a){
	int b,i;
	printf("ENTER THE TWO NUMBERS \n");
	scanf("%d %d",&a,&b);
	for(i=1;i<=a*b;i++){
		if(i%a==0 && i%b==0){
			printf("LCM IS %d\n",i);
			break;
		}
		//else{
		//	printf("NO LCM ");
		}
	}
//	printf("LCM OF TWO NUMBERS IS %d",i);
//}


