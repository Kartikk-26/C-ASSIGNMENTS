#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    char b[100];
    printf("ENTER THE STRING 1\n");
    gets(a);
    printf("ENTER THE STRING 2\n");
    gets(b);

    if(strcmp(a,b)==0){
        printf("BOTH THE STRINGS ARE EQUAL\n");
    }
    else{
        printf("BOTH THE STRINGS ARE NOT EQUAL\n");
    }
}