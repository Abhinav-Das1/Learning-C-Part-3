#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("putcdemo.txt", "w");
    putc('A', ptr);
    putc('b', ptr);
    putc('h', ptr);
    putc('i', ptr);
    putc('n', ptr);
    putc('a', ptr);
    putc('v', ptr);

    fclose(ptr);
    return 0;
}