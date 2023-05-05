#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {
    int i;
    for (i = 0; i < 5; i++) {
        pid_t pid = fork();
        if (pid == -1) {
            perror("fork");
            return 1;
        } else if (pid == 0) {
            char *args[] = {"ls", "-l", "/tmp", NULL};
            char *envp[] = {NULL};
            if (execve("/bin/ls", args, envp) == -1) {
                perror("execve");
                return 1;
            }
        } else {
            wait(NULL);
        }
    }
    return 0;
}







