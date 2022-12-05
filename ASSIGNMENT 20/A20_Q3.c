#include<stdio.h>
int main(){
    typedef struct student{
        int id;
        char*name[50];
        int rollnumber;
        int mobilenumber;
    }stud;
     stud stud1,stud2;

    //DETAILS OF STUDENT 1
    printf("ENTER THE DETAILS OF STUDENT 1:\n");
    printf("ENTER THE ID\n");
    scanf("%d",&stud1.id);
    printf("ENTER THE NAME\n");
    scanf("%s",&stud1.name);
    printf("ENTER THE ROLL NUMBER\n");
    scanf("%d",&stud1.rollnumber);
    printf("ENTER THE MOBILE NUMBER\n");
    scanf("%d",&stud1.mobilenumber);

    //DETAILS OF STUDENT 2
    printf("ENTER THE DETAILS OF STUDENT 2:\n");
    printf("ENTER THE ID\n");
    scanf("%d",&stud2.id);
    printf("ENTER THE NAME\n");
    scanf("%s",&stud2.name);
    printf("ENTER THE ROLL NUMBER\n");
    scanf("%d",&stud2.rollnumber);
    printf("ENTER THE MOBILE NUMBER\n");
    scanf("%d",&stud2.mobilenumber);

    //PRINTING THE DETAILS 
    printf("\n\nDETAILS OF STUDENT 1:\nID = %d\nNAME = %s\nROLL NUMBER = %d\nMOBILE NUMBER = %d\n",stud1.id,stud1.name,stud1.rollnumber,stud1.mobilenumber);
    printf("\n\nDETAILS OF STUDENT 2:\nID = %d\nNAME = %s\nROLL NUMBER = %d\nMOBILE NUMBER = %d\n",stud2.id,stud2.name,stud2.rollnumber,stud2.mobilenumber);

    



}
