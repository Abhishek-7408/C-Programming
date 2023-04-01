#include<stdio.h>
#include<string.h>
struct Employee
{
    char ename[10];
    float salary;
    int age;
};

void main()
{
    struct Employee emp1, emp2;
    printf("Employee 1 name : ");
    scanf("%s",&emp1.ename);
    printf("Employee 1 salary : ");
    scanf("%f",&emp1.salary);
    printf("Employee 2 name : ");
    scanf("%s",&emp2.ename);
    printf("Employee 2 salary : ");
    scanf("%f",&emp2.salary);
    printf("Employee 2 age : ");
    scanf("%d",&emp2.age);

    printf("\nEmployee 1 name : %s",emp1.ename);
    printf("\nEmployee 1 salary : %f",emp1.salary);
    printf("\nEmployee 2 name : %s",emp2.ename);
    printf("\nEmployee 2 salary : %f",emp2.salary);
    printf("\nEmployee 2 age : %d",emp2.age);
}
