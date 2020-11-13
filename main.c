#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char** argv, char** envp)
{
        char** new_envp = (char**) calloc(argc - 1, sizeof(char));

        for (int i = 0; i < argc - 2; i++)
                new_envp[i] = argv[i + 2];

        execve(argv[1], argv + 1, new_envp);

        return 0;
}
