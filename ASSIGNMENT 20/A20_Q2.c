#include<stdio.h>
int main(){
    typedef struct employee{
        int id;
        char*name[50];
        int salary;
    }ep;
     ep ep1,ep2,ep3;
    
                                             //TAKING ENTRIES FROM USER
    //DETAILS OF EMPLOYEEE 1
    printf("ENTER THE ID OF EMPLOYEE 1:\n");
    scanf("%d",&ep1.id);
    printf("ENTER THE NAME OF EMPLOYEE 1:\n");
    scanf("%s",&ep1.name);
    printf("ENTER THE SALARY OF EMPLOYEE 1:\n");
    scanf("%d",&ep1.salary);

    //DETAILS OF EMPLOYEE 2
    printf("ENTER THE ID OF EMPLOYEE 2:\n");
    scanf("%d",&ep2.id);
    printf("ENTER THE NAME OF EMPLOYEE 2:\n");
    scanf("%s",&ep2.name);
    printf("ENTER THE SALARY OF EMPLOYEE 2:\n");
    scanf("%d",&ep2.salary); 

    //DETAILS OF EMPLOYEE 3
    printf("ENTER THE ID OF EMPLOYEE 3:\n");
    scanf("%d",&ep3.id);
    printf("ENTER THE NAME OF EMPLOYEE 3:\n");
    scanf("%s",&ep3.name);
    printf("ENTER THE SALARY OF EMPLOYEE 3:\n");
    scanf("%d",&ep3.salary);


                                             //PRINTING ALL THE ENTRIES 
   printf("\n\nDETAILS OF EMPLOYEE 1:\nID=%d\nNAME=%s\nSALARY=%d\n\n",ep1.id,ep1.name,ep1.salary);
   printf("DETAILS OF EMPLOYEE 2:\nID=%d\nNAME=%s\nSALARY=%d\n\n",ep2.id,ep2.name,ep2.salary);
   printf("DETAILS OF EMPLOYEE 3:\nID=%d\nNAME=%s\nSALARY=%d\n\n",ep3.id,ep3.name,ep3.salary);     
                                        
}