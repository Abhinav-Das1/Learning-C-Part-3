#include <stdio.h>

int main()
{
    int val;
    FILE *ptr;
    ptr = fopen("p.txt", "r");
    fscanf(ptr, "%d", &val);
    
    val *= 2;
    fclose(ptr);

    ptr = fopen("q.txt", "w");
    fprintf(ptr, "%d\n", val);
    fclose(ptr);
    printf("The value in the file has been doubled.\n");
    return 0;
}