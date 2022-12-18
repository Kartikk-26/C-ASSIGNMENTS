#include<stdio.h>
#include<string.h>
int main(){
    char *a[100];
    printf("ENTER THE STRING\n");
    scanf("%s",&a);
    strlwr(a);
    printf("STRING IN LOWER CASE IS %s\n",a);
    strupr(a);
    printf("STRING IN UPPERCASE IS %s\n",a);
}