#include <stdio.h>

int main()
{
    char name1[40], name2[40];
    float salary1, salary2;

    // Get input from the user
    printf("Enter the name of employee 1: \n");
    scanf("%s", &name1);
    printf("Enter the salary of employee 1: \n");
    scanf("%f", &salary1);

    // Get input from the user
    printf("Enter the name of employee 2: \n");
    scanf("%s", &name2);
    printf("Enter the salary of employee 2: \n");
    scanf("%f", &salary2);

    // Opening a file
    FILE *ptr;
    ptr = fopen("Employee.txt", "w");

    // Writing employee information
    fprintf(ptr, "Employee 1\n");
    fprintf(ptr, "Name: %s\n", name1);
    fprintf(ptr, "Salary:  %.2f\n", salary1);

    fprintf(ptr, "Employee 2\n");
    fprintf(ptr, "Name: %s\n", name2);
    fprintf(ptr, "Salary:  %.2f\n", salary2);

    fclose(ptr);
    printf("Employee data has been written to Employee.txt\n");
    return 0;
}