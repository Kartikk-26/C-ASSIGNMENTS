#include<stdio.h>
int main(){
    int s;
    typedef struct percentage{
        int id;
        float percentage;
    }stu;
     stu stud[20];

     //TAKING ENTRIES

     printf("ENTER THE NO OF STUDENT \n");
     scanf("%d",&s);
     for(int i=0;i<s;i++){
        printf("ENTER THE ID OF STUDENT %d\n",i+1);
        scanf("%d",&stud[i].id);
        printf("ENTER THE PERCENATGE OF STUDENT %d\n",i+1);
        scanf("%f",&stud[i].percentage);
     }

     //PRINTING ENTRIES 
     for(int i=0;i<s;i++){
        printf("\n\nDATA OF STUDENT %d\n",i+1);
        printf("ID = %d\nPERCENTAGE = %f",stud[i].id,stud[i].percentage);
     }




     
}