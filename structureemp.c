/*Write a program of structure for five employee that provides the
followinginformation -print and display empno, empname, address and
age*/
#include <stdio.h>
#include <string.h>

struct Employee
{
    int empno;
    char empname[50];
    char address[100];
    int age;
};

int main()
{
    struct Employee emp[5];

    // Initialize the employee data
    emp[0].empno = 1001;
    strcpy(emp[0].empname, "John Doe");
    strcpy(emp[0].address, "123 Main St, Anytown, USA");
    emp[0].age = 30;

    emp[1].empno = 1002;
    strcpy(emp[1].empname, "Jane Smith");
    strcpy(emp[1].address, "456 Elm St, Anytown, USA");
    emp[1].age = 25;

    emp[2].empno = 1003;
    strcpy(emp[2].empname, "Bob Johnson");
    strcpy(emp[2].address, "789 Oak St, Anytown, USA");
    emp[2].age = 35;

    emp[3].empno = 1004;
    strcpy(emp[3].empname, "Mary Jones");
    strcpy(emp[3].address, "1011 Pine St, Anytown, USA");
    emp[3].age = 28;

    emp[4].empno = 1005;
    strcpy(emp[4].empname, "Tom Wilson");
    strcpy(emp[4].address, "1213 Maple St, Anytown, USA");
    emp[4].age = 32;

    // Print the employee data
    for (int i = 0; i < 5; i++)
    {
        printf("Employee %d:\n", i + 1);
        printf("  Employee Number: %d\n", emp[i].empno);
        printf("  Employee Name: %s\n", emp[i].empname);
        printf("  Employee Address: %s\n", emp[i].address);
        printf("  Employee Age: %d\n", emp[i].age);
    }

    return 0;
}
