#include<stdio.h>
struct{
    char*name;
    int id;
    int salary;
}stud1,stud2,stud3;
int main(){
    stud1.id=1010;
    stud2.id=1011;
    stud3.id=1012;
    stud1.name="KARTIK JAIN";
    stud2.name="MANAS PARWANI";
    stud3.name="HARSHAL JAIN";
    stud1.salary=100000;
    stud2.salary=100000;
    stud3.salary=100000;
    printf("DETAIL OF STUDENT 1\n");
    printf("Id  %d\nName  %s\nSalary  %d\n\n",stud1.id,stud1.name,stud1.salary);

    printf("DETAIL OF STUDENT 2\n");
    printf("Id  %d\nName  %s\nSalary  %d\n\n",stud2.id,stud2.name,stud2.salary);

    printf("DETAIL OF STUDENT 3\n");
    printf("Id  %d\nName  %s\nSalary  %d\n\n",stud3.id,stud3.name,stud3.salary);

}