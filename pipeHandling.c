#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <wait.h>
#include "handler.c"

void gremmie_Execute(char **argv, int *argc) {
    //printf("%s,%s\n", argv[0], argv[1]);
    pid_t pid = fork();
    if (pid < 0) {
        perror("Fork failed");
    } else if (pid == 0) {
        if ((strcmp(argv[0], "cd") == 0 || strcmp(argv[0], "tail") == 0 ||
             strcmp(argv[0], "uniq") == 0 || (strcmp(argv[0], "help") == 0))) {
            handler(argv, *argc);
            /*   printf("%s,%s\n", argv[0], argv[1]);
               printf("%d", *argc);
               */
            exit(0);
        }
        int i = 0;
        while (strcmp(argv[i], "\0") != 0) {
            i++;
        }
        argv[i] = 0;
        execvp(argv[0], argv);
        exit(0);
    } else { wait(0); }
}

void grem_Pipin(char *commands[20][5], int numberOfPipes) {
    /* printf("%s,%s,%s,%s,%s,%s", commands[0][0], commands[0][1], commands[0][2], commands[1][0], commands[1][1],
            commands[1][2]);
            */
    int fd[2];
    int stdPipe;
    stdPipe = STDIN_FILENO;
    int i;
    for (i = 0; i < numberOfPipes; i++) {
        if (pipe(fd) < 0) {
            perror("Send help");
            exit(1);
        }
        pid_t pid = fork();
        if (pid < 0) {
            perror("Fork error");
            exit(2);
        }
        if (pid == 0) {
            if (stdPipe != STDIN_FILENO) {
                dup2(stdPipe, STDIN_FILENO);
                close(stdPipe);
            }
            dup2(fd[1], STDOUT_FILENO);
            close(fd[1]);
            int counter = 0;
            while (commands[i][counter] != NULL) {
                counter++;
            }
            gremmie_Execute(commands[i], &counter);
            exit(0);
        } else (wait(0));
        close(stdPipe);
        close(fd[1]);
        stdPipe = fd[0];
    }
    if (stdPipe != STDIN_FILENO) {
        dup2(stdPipe, STDIN_FILENO);
        close(stdPipe);
    }
    int counter = 0;
    while (commands[i][counter] != NULL) {
        counter++;
    }
    gremmie_Execute(commands[i], &counter);
}

