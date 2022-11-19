#include<stdio.h>
int main(){
    int a[5];
    int i,s=6,p,x;
    
    printf("ENTER THE NUMBER \n");
    for(i=0;i<s-1;i++)
	{
        scanf("%d",&a[i]);
    }
    
    // printf("WHAT NUMBER YOU WANT TO INSERT  \n");
    // scanf("%d",&x);
    printf("POSITION \n");
    scanf("%d",&p);
    if(p==1){
        printf("Enter your value:");
        scanf("%d",&a[0]);
    }
    else{
        printf("Enter your value:");
        scanf("%d",&a[p-1]);
    }
    
  
    printf(" PRINTING THE NEW ARRAY \n");
    for(i=0;i<s;i++)
	{
        printf("%d \n",a[i]);
        
        
        
    }
    return 0;
}