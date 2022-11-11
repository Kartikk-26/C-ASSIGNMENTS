#include<stdio.h>
int main(){
    int a,i;
    for(i=1;i<=10;i++){
        printf("ENTER THE NUMBER \n");
        scanf("%d",&a);
        //printf("THE ENTERED VALUE IS %d \n",a);
        if(a==10){
            continue;
        }
        else{
        printf("THE ENTERED VALUE IS %d \n",a);
        }
    }
}
