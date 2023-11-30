#include <stdio.h>

int main (){
    FILE *ptr;
    int num = 28;
    ptr = fopen("Generated.txt", "w");
    fprintf(ptr, "The number is %d\n", num);
    fclose(ptr);
    return 0;
}