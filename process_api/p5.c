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
        int status;
        int rc_wait = waitpid(rc, &status, 0);
        printf("status %d\n", status);
        printf("hello, I am parent of %d (rc_wait:%d) (pid:%d)\n", rc, rc_wait, getpid());
    }
    return 0;
}
