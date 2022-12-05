#include<stdio.h>
int main(){
    typedef struct Student_marks{
        int id;
        char*name[50];
        int chemmarks;
        int mathsmarks;
        int phymarks;
    }stud;
     stud stud1,stud2,stud3;

     //DETAILS OF STUDENT 1 
     printf("ENTER THE DETAILS OF STUDENT 1\n");
     printf("ENTER THE ID\n");
     scanf("%d",&stud1.id);
     printf("ENTER THE NAME\n");
     scanf("%s",&stud1.name);
     printf("ENTER THE CHEMISTRY MARKS\n");
     scanf("%d",&stud1.chemmarks);
     printf("ENTER THE MATHS MARKS\n");
     scanf("%d",&stud1.mathsmarks);
     printf("ENTER THE PHYSICS MARKS\n");
     scanf("%d",&stud1.phymarks);
     

     //DETAILS OF STUDENT 2
     printf("ENTER THE DETAILS OF STUDENT 2\n");
     printf("ENTER THE ID\n");
     scanf("%d",&stud2.id);
     printf("ENTER THE NAME\n");
     scanf("%s",&stud2.name);
     printf("ENTER THE CHEMISTRY MARKS\n");
     scanf("%d",&stud2.chemmarks);
     printf("ENTER THE MATHS MARKS\n");
     scanf("%d",&stud2.mathsmarks);
     printf("ENTER THE PHYSICS MARKS\n");
     scanf("%d",&stud2.phymarks);

     //DETAILS OF STUDENT 3
     printf("ENTER THE DETAILS OF STUDENT 3\n");
     printf("ENTER THE ID\n");
     scanf("%d",&stud3.id);
     printf("ENTER THE NAME\n");
     scanf("%s",&stud3.name);
     printf("ENTER THE CHEMISTRY MARKS\n");
     scanf("%d",&stud3.chemmarks);
     printf("ENTER THE MATHS MARKS\n");
     scanf("%d",&stud3.mathsmarks);
     printf("ENTER THE PHYSICS MARKS\n");
     scanf("%d",&stud3.phymarks);
     

     //PRINTING THE DETAILS 
     printf("\n\nDETAIL OF STUDENT 1\nID =%d\nNAME = %s\nCHEMISTRY MARKS =%d\nMATHS MARKS = %d\nPHYSICS MARKS = %d",stud1.id,stud1.name,stud1.chemmarks,stud1.mathsmarks,stud1.phymarks);
     printf("\n\nDETAIL OF STUDENT 2\nID =%d\nNAME = %s\nCHEMISTRY MARKS =%d\nMATHS MARKS = %d\nPHYSICS MARKS = %d",stud2.id,stud2.name,stud2.chemmarks,stud2.mathsmarks,stud2.phymarks);
     printf("\n\nDETAIL OF STUDENT 3\nID =%d\nNAME = %s\nCHEMISTRY MARKS =%d\nMATHS MARKS = %d\nPHYSICS MARKS = %d",stud3.id,stud3.name,stud3.chemmarks,stud3.mathsmarks,stud3.phymarks);


}