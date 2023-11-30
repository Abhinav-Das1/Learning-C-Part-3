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
    int a = 35;
    float b = 23.456;
    char c = 'h';
    struct employee e1;
    e1.code = 100;
    e1.salary = 69.69;
    strcpy(e1.name, "Abhinav");
    printf("%d\n", e1.code);
    printf("%f\n", e1.salary);
    printf("%s\n", e1.name);

    return 0;
}