#include <stdio.h>
struct Employee 
{
    int empno;
    char empname[50];
    char address[100];
    int age;
};

void printEmployee(struct Employee emp) 
{
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

int main() 
{

    struct Employee emp1;

    emp1.empno = 1;
    strcpy(emp1.empname, "shivam");
    strcpy(emp1.address, "nadiad");
    emp1.age = 20;
    printf("Employee details:\n");
    printEmployee(emp1);


    return 0;
}

