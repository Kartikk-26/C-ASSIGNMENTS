#include<stdio.h>
int main(){
    typedef struct birthday{
        int date;
        int month;
        float year;
    }stud;
     stud stud1,stud2,stud3;

     //DETAILS OF STUDENT 1 
     printf("ENTER THE DETAILS OF STUDENT 1\n");
     printf("ENTER THE BIRTH DATE\n");
     scanf("%d",&stud1.date);
     printf("ENTER THE BIRTH MONTH\n");
     scanf("%d",&stud1.month);
     printf("ENTER THE BIRTH YEAR\n");
     scanf("%f",&stud1.year);

     //DETAILS OF STUDENT 2
     printf("ENTER THE DETAILS OF STUDENT 2\n");
     printf("ENTER THE BIRTH DATE\n");
     scanf("%d",&stud2.date);
     printf("ENTER THE BIRTH MONTH\n");
     scanf("%d",&stud2.month);
     printf("ENTER THE BIRTH YEAR\n");
     scanf("%f",&stud2.year);

     //PRINTING THE DETAILS 
     printf("\n\nDETAIL OF STUDENT 1\nBIRTH DATE =%d\nBIRTH MONTH = %d\nBIRTH YEAR =%f",stud1.date,stud1.month,stud1.year);
     printf("\n\nDETAIL OF STUDENT 2\nBIRTH DATE =%d\nBIRTH MONTH = %d\nBIRTH YEAR =%f",stud2.date,stud2.month,stud2.year);


}