#include <string.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <readline/readline.h>
#include <readline/history.h>
int grem_takeInput(char *str) {
    char *buf;
    char cwd[1024];
    getcwd(cwd, sizeof(cwd));
    printf("\nDir: %s", cwd);
    buf = readline("\n>>> ");
    if (strlen(buf) != 0) {
        add_history(buf);
        strcpy(str, buf);
        return 0;
    } else {
        return 1;
    }
}
char ***argumentHandling(char **argv, int *argc, char *buffer, char *commands[20][5]) {
    char *string;
    string = strtok(buffer, " ");
    int commandIndex = 0;
    int argumentIndex = 0;
    int i = 0;
    while (string != NULL) {
        if ((strcmp(string, ">")) == 0) {
            int fd;
            string = strtok(NULL, " ");
            argv[i] = '\0';
            fd = open(string, O_CREAT | O_WRONLY, S_IRWXU);
            if (fd == -1)
                perror("Something went wrong with creating file, probably!");
            dup2(fd, 1);
            close(fd);
            return 0;
        } else if ((strcmp(string, ">>")) == 0) {
            int fd;
            string = strtok(NULL, " ");
            argv[i] = '\0';
            fd = open(string,    O_APPEND| O_WRONLY);
            if (fd == -1)
                perror("Something went wrong with creating or appending to the file, probably!");
            dup2(fd, 1);
            close(fd);
            return 0;
        } else if ((strcmp(string, "<")) == 0) {
            int fd;
            string = strtok(NULL, " ");
            argv[i] = '\0';
            fd = open(string, O_RDONLY);
            if (fd == -1)
                perror("Something went wrong with reading file, maybe!");
            dup2(fd, 0);
            close(fd);
            return 0;
        } else {
            if (strcmp(string, "|") == 0) {
                commandIndex++;
                argumentIndex = 0;
                string = strtok(NULL, " ");
            } else {
                commands[commandIndex][argumentIndex] = string;
                argumentIndex++;
                string = strtok(NULL, " ");
                *argc = *argc + 1;
            }
        }


    }

}
int pipeHandler(int *argc, char *argv[], char *buffer) {
    int pipeIndex = 0;
    for (int i = 0; i < strlen(buffer); i++) {
        {
            if (buffer[i] == '|') {
                pipeIndex++;
            }
        }
    }
    return pipeIndex;
}