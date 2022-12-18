#include<stdio.h>
#include<string.h>
int main(){
    int i=0;
    char a[1000];
    printf("ENTER THE STRING\n");
    scanf("%s",&a);
    while(a[i]!='\0')
    i++;
    printf("SIZE OF STRING IS %d\n",i);


}