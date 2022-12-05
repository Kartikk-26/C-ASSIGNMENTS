#include<Stdio.h>
int main(){
    int s;
    typedef struct employee{
        int id,salary;
        char*name[50];
    }ep;
     ep emp[20];

     printf("ENTER HOW MANY EMPLOYEE DETAIL YOU WANT \n");
     scanf("%d",&s);

     //TAKING ENTRIES OF EMPLOYEE
     for(int i=0;i<s;i++){
        printf("ENTER THE ID OF STUDENT %d\n",i+1); scanf("%d",&emp[i].id);
        printf("ENTER THE NAME OF STUDENT %d\n",i+1); scanf("%s",&emp[i].name);
        printf("ENTER THE SALARY OF STUDENT %d\n",i+1); scanf("%d",&emp[i].salary);
     }

     //PRINTING THE ENTRIES OF EMPLOYEEE 
     for(int i=0;i<s;i++){
        printf("\n\nDATA OF EMPLOYEE %d IS\n",i+1);
        printf("ID = %d\nNAME = %s\nSALARY = %d\n",emp[i].id,emp[i].name,emp[i].salary);
     }

}