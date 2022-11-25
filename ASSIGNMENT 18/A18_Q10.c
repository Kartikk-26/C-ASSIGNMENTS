#include<stdio.h>
int main(){
    int a[5],b[5],i,j;
    //DETAILS OF ARRAY 1 
    printf("ENTER THE DETAILS OF FIRST ARRAY \n");
    for(i=0;i<5;i++){
        scanf("%d ",&a[i]);
    }
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    //DETAILS OF ARRAY 2 
     printf("\nENTER THE DETAILS OF SECOND ARRAY \n");
    for(i=0;i<5;i++){
        scanf("%d ",&b[i]);
    }
    for(i=0;i<5;i++){
        printf("%d ",b[i]);
    }


    
}