#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;

    ptr = (float *)malloc(7 * sizeof(float));
    for (int i = 0; i < 7; i++)
    {
        printf("Enter the value of %.2f element: \n", (float)i);
        scanf("%f", &ptr[i]);
    }
    for (int i = 0; i < 7; i++)
    {
        printf("The value of %.2f element is: %.2f\n", (float)i, ptr[i]);
    }
    return 0;
}