#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    printf("hello world (pid:%d)\n", getpid());
    int rc = fork();
    if (rc < 0) {
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if (rc == 0) {
        printf("hello, I am child (pid:%d)\n", getpid());
    } else {
        printf("hello, I am parent of %d (pid:%d)\n", rc, getpid());
    }
    return 0;
}
