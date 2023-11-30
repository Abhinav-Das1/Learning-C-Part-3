#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee Abhinav = {100, 71.22, "Abhinav"};

    printf("Code is: %d\n", Abhinav.code);
    printf("Salary is: %f\n", Abhinav.salary);
    printf("Name is: %s\n", Abhinav.name);
    return 0;
}