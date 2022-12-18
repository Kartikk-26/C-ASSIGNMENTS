#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char a[1000],b[1000];
    printf("ENTER THE STRING \n");
    scanf("%s",&a);
    for( i=0;a[i]!='0';i++){
        b[i]=a[i];
    }
   // b[i]='\0';

    printf("MAIN STRING IS %s\n",a);
    printf("COPIED STRING IS %s\n",b);
}