#include <stdio.h>
#include <stdlib.h>

int main() {
    int memory = 1 * 1024 * 1024;
    int length = (int) (memory / sizeof(int));
    int *arr = malloc(memory);
    int index = 0;

    printf("%d\n", length);

    while (1) {
        if (index == length) {
            break;
        }
        arr[index] += 1;
        printf("%d\n", arr[index]);
        index++;
    }

    free(arr);
    return 0;
}
