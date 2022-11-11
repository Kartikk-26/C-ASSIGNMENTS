#include<stdio.h>
int fseries(int);
int main(){
	int a,number;
	number=fseries(a);
}
int fseries(int a){
	int t1=0,t2=1,t3,i;
	printf("ENTER THE NUMBER OF TERMS \n");
	scanf("%d",&a);
	//printf("%d %d \n",t1,t2);
	for(i=2;i<a;i++){
		t3=t1+t2;
		printf("%d \n",t3);
		t1=t2;
		t2=t3;
}

}
