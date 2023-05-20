#include <unistd.h>
#include "pipeHandling.c"
#include "argumentHandling.c"

int main(int argc, char *argv[]) {
    int in = dup(0);
    int out = dup(1);
    char *buffer = malloc(100);
    char *commands[20][5];
    argc = 0;
    while (1) {
        for (int i = 0; i < 20; i++) {
            for (int j = 0; j < 5; j++) {
                commands[i][j] = (char *) malloc(100);
            }
        }
        if (grem_takeInput(buffer)) {
            continue;
        }
        int pipeIndex = pipeHandler(&argc, argv, buffer);
        argumentHandling(argv, &argc, buffer, commands);

        if (pipeIndex == 0) {
            gremmie_Execute(commands[0], &argc);
        } else if (pipeIndex > 0) {
            if (fork() == 0)
                grem_Pipin(commands, pipeIndex);
            else { wait(0); }
        }
        if (strcmp(commands[0][0], "kms") == 0 || strcmp(commands[0][0], "exit") == 0) {
            printf("Successful suicide kek\n");
            exit(0);
        }
        if (strcmp(commands[0][0], "cd") == 0) {
            if (argc >= 2) {
                //printf("%s\n", commands[0][1]);
                if (chdir(commands[0][1]) < 0) {
                    printf("cd: %s", commands[0][1]);
                    printf(": Check name of file again..\n");
                }
            }
        }
        dup2(in, 0);
        dup2(out, 1);
        argc = 0;
    }
}
