#include<stdio.h>
int main(){
    int a[1000];
    int i,j,n,d;

    //SIE AND DETAIL OF ARRAY 
    printf("ENTER THE SIZE OF ARRAY \n");
    scanf("%d",&n);
    printf("ENTER THE DETAILS OF ARRAY \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }



    //LOGIC FOR DELETING THE ARRAY 
    printf("ENTER THE ELEMNET WHICH YOU WANT DELETE \n");
    scanf("%d",&d);
    for(i=d-1;i<n;i++){
        a[i]=a[i+1];
        n--;
    }


    //FINAL ARRAY PRINT
    printf("PRINTING THE FINAL ARRAY \n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }



}