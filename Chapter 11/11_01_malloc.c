#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    // Size of operators in C
    // printf("The size of int on my laptop is %d\n", sizeof(int));
    // printf("The size of float on my laptop is %d\n", sizeof(float));
    // printf("The size of char on my laptop is %d\n", sizeof(char));

    ptr = (int *)malloc(7 * sizeof(int));
    for (int i = 0; i < 7; i++)
    {
        printf("Enter the value of %d element: \n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 7; i++)
    {
        printf("The value of %d element is: %d\n", i, ptr[i]);
    }
    return 0;
}