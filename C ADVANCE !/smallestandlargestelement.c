#include<stdio.h>
int main(){
	int a[3],swap,i,j;
	for(i=0;i<3;i++){
		printf("ENTER THE NUMBER \n");
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++){
		for(j=i+1;j<=3;j++){
			if(a[i]>a[j]){
				swap=a[i];
				a[i]=a[j];
				a[j]=swap;
			}
		}
	}
	printf("ARRAY SORTED \n");
	for(i=0;i<3;i++){
		printf("%d\n",a[i]);
		
	}
	printf("SMALLEST ELEMENT IS %d\n",a[0]);
	printf("LARGEST ELEMENT IS %d\n",a[2]);
	return 0;
}
