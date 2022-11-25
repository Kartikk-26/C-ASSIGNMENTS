#include<stdio.h>
int main(){
    int a[5],i,sume=0,sumo=0;
    printf("ENTER THE NUMBER \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",& a[i]);
        if(a[i]%2==0){
            sume=sume+a[i];
        }
        else{
            sumo=sumo+a[i];
        }
    }
    printf("SUM OF EVEN NUMBER IS %d\n",sume);
    printf("SUM OF ODD NUMBER IS %d\n",sumo);

    

}