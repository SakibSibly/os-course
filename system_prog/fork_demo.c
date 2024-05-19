#include <stdio.h>
#include <unistd.h>     // Only available in linux
#include <sys/types.h>  //

int main() {
    pid_t child_pid;

    child_pid = vfork();

    if (child_pid == 0) {
        printf("I'm in the child process\n");
    }
    else if (child_pid > 0) {
        printf("I'm in the parent process\n");
    }
    else {
        printf("fork failed\n");
    }
}