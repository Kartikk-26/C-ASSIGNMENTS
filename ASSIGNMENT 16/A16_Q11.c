#include<stdio.h>
int main(){
	int t1=0,t2=1,t3,i,a;
	printf("ENTER THE NUMBER OF TERMS \n");
	scanf("%d",&a);
	//printf("%d %d \n",t1,t2);
	for(i=2;i<a;i++){
		t3=t1+t2;
		printf("%d \n",t3);
		t1=t2;
		t2=t3;
	}
	return 0;
	

	
	
	
	
	
	
	
}
