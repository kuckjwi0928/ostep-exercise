#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *i = malloc(100);
    printf("%p\n", i);
    free(i);
}
