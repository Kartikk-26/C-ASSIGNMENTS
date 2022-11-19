#include<stdio.h>
int main(){
    int a[5];
    int i,s=6,p;
    // printf("enter");
    // scanf("%d",&p);
    printf("ENTER THE NUMBER \n");
    for(i=0;i<5;i++)
	{
        scanf("%d",&a[i]);
    }
    
    printf("DELETE THE ENTRY WHICH YOU WANT TO DELETE \n");
    scanf("%d",&p);
    for(i=p-1;i<s;i++)
	{
        a[i]=a[i+1];
        s--;
    }
  
    printf(" PRINTING THE NEW ARRAY \n");
    for(i=0;i<s;i++)
	{
        printf("%d \n",a[i]);
    }
    return 0;
}