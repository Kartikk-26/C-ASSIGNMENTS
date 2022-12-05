#include<stdio.h>
int main(){
    int a[100],size,b,i;
    printf("ENTER THE SIZE OF ARRAY \n");
    scanf("%d",&size);
    printf("ENTER THE DETAIL OF ARRAY \n");
    for(b=0;b<size;b++){
        scanf("%d",&a[b]);
    }
    printf("ARRAY IN REVERSE ORDER \n");
    for(b=size-1;b>=0;b--){
        printf("%d",a[b]);
    }








}