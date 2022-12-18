#include<stdio.h>
#include<string.h>
int main(){
    char a[1000],ch;
    int count=0;
    printf("ENTER THE STRING\n");
    gets(a);
    printf("ENTER THE CHARACTER OF WHICH YOU WANT FREQUENCY\n");
    scanf("%c",&ch);
    for(int i=0;a[i]!='\0';++i){
        if(ch==a[i])
        ++count;
    }

    printf("FREQUENCY OF %c is %d",ch,count);
}