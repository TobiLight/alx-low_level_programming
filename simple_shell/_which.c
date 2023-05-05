#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "shell.h"

#define PATH_MAX 4096

int main(int argc, char *argv[])
{
    char *path = getenv("PATH");
    char *dir = _strtok(path, ":");
    char full_path[PATH_MAX];
    struct stat st;
    int found = 0;

    while (dir != NULL)
    {
        strcpy(full_path, dir);
        strcat(full_path, "/");
        strcat(full_path, argv[1]);

        if (stat(full_path, &st) == 0 && S_ISREG(st.st_mode))
        {
            printf("%s\n", full_path);
            found = 1;
            break;
        }

        dir = _strtok(NULL, ":");
    }

    if (!found)
    {
        printf("%s not found in PATH\n", argv[1]);
        return 1;
    }

    return 0;
}