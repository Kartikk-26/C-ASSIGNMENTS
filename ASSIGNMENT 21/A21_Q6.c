#include<stdio.h>
#include<string.h>
int main(){
    char a[1000],b[1000];
    int i=0,end,begin;
    printf("ENTER THE STRING\n");
    scanf("%s",&a);
    //STRING LENGTH
    while(a[i]!='\0')                                 //FINDING STRING LENGTH
    i++;
    end=i-1;                                          //END = LENGTH-1
    for(begin=0;begin<i;begin++){                     //END IS MAIN STRING 
        b[begin]=a[end];                              //BEGIN IS UPDATED STRING (REVERSE STRING)
        end--;
    }
    b[begin]='\0';                                    //TAKING ELEMENT TILL NULL CHARACTER 
    printf("%s",b);

}
