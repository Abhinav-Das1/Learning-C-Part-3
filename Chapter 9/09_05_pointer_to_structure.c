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
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    (*ptr).code = 120; //or you can also write : ptr->code = 120;
    printf("%d\n", e1.code);

    (*ptr).salary = 120.457; //or you can also write : ptr->salary = 120.457;
    printf("%f\n", e1.salary);

    strcpy((*ptr).name, "Abhinav"); //or you can also write : ptr->name = Abhinav;
    printf("%s\n", e1.name);
    return 0;
}