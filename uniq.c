
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int uniq(int argc, char *argv[]) {
    FILE *fp;
    char *line1 = NULL;
    char *line2 = NULL;
    int len1 = 0;
    int len2 = 0;
    int command = 1;
    char *array[512];

    if (argc > 2) {
        if (strcmp(argv[command], "-i") == 0) {
            if ((fp = fopen(argv[command + 1], "r")) == NULL) {
                perror("Can't open file!");
                return 4;
            }
            while (getline(&line1, &len1, fp) != -1) {
                while ((getline(&line2, &len2, fp)) != -1) {
                    if (strcasecmp(line1, line2) != 0) {
                        printf("%s", line1);
                        line1 = NULL;
                        line1 = strdup(line2);
                        line2 = NULL;
                        len1 = len2;
                        len2 = 0;
                    }
                }
            }
            if (fclose(fp) != 0) {
                perror("Can't close file!");
                return 5;
            }
        }
        if (strcmp(argv[command], "-d") == 0) {
            if ((fp = fopen(argv[command + 1], "r")) == NULL) {
                perror("Can't open file!");
                return 6;
            }

            int i = 0;
            while (getline(&line1, &len1, fp) != -1) {
                array[i] = (char *) malloc(sizeof(char) * (strlen(line1) + 1));
                strcpy(array[i], line1);
                i++;

            }
            for (int j = 0; j < i; j++) {
                int ok = 0;
                for (int k = 0; k < i; k++) {
                    if (j != k) {
                        if (strcmp(array[j], array[k]) == 0 && strcmp(array[j + 1], array[k]) != 0) {
                            ok = 1;

                        }
                    }
                }
                if (ok == 1) {
                    printf("%s", array[j]);
                }
            }

            if (fclose(fp) != 0) {
                perror("Can't close file!");
                return 7;
            }
        }else if (strcmp(argv[command], "-u") == 0) {
            if ((fp = fopen(argv[command + 1], "r")) == NULL) {
                perror("Can't open file!");
                return 8;
            }
            int i = 0;
            while (getline(&line1, &len1, fp) != -1) {
                array[i] = (char *) malloc(sizeof(char) * (strlen(line1) + 1));
                strcpy(array[i], line1);
                i++;

            }
            for (int j = 0; j < i; j++) {
                int ok = 1;
                for (int k = 0; k < i; k++) {
                    if (j != k) {
                        if (strcmp(array[j], array[k]) == 0) {
                            ok = 0;
                        }
                    }
                }
                if (ok == 1) {
                    printf("%s", array[j]);
                }
            }
            if (fclose(fp) != 0) {
                perror("Can't close file!");
                return 7;
            }
        }
    }
    else if (argc == 2) {
        if ((fp = fopen(argv[command], "r")) == NULL) {
            perror("Can't open file!");
            return 2;
        }
        while (getline(&line1, &len1, fp) != -1) {
            while ((getline(&line2, &len2, fp)) != -1) {
                if (strcmp(line1, line2) != 0) {
                    printf("%s", line1);
                    line1 = NULL;
                    line1 = strdup(line2);
                    line2 = NULL;
                    len1 = len2;
                    len2 = 0;
                }
            }
        }
        if (fclose(fp) != 0) {
            perror("Can't close file!");
            return 3;
        }

    }
    return 0;
}