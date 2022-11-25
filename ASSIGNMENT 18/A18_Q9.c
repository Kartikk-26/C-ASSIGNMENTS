#include<stdio.h>
int main(){
    int a[5],i,swap,j;
    printf("ENTER THE NUMBER \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ARRAY IN REVERSE ORDER \n");
    for(i=4;i>=0;i--){
        printf("%d ",a[i]);
    }
}
