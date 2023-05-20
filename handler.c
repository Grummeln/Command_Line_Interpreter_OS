#include <string.h>
#include <stdio.h>
#include "helpMe.c"
#include "tail.c"
#include "uniq.c"
void fromConsole(){
    int c;
    while((c=getchar())!=EOF)
        putchar(c);

}
void handler(char **argv, int argc) {
    if (*argv == NULL)
        return;
    if (strcmp(*argv, "help") == 0) {
        helpMe();
    }
    if (strcmp(*argv, "tail") == 0) {
        if (argc >= 2)
            tail(&argc, argv);

        else if(argc == 1){
            fromConsole();
        }
    }
    if (strcmp(*argv, "uniq") == 0) {
        if (argc == 1) {
            fromConsole();
        } else {
            uniq(argc, argv);

        }
    }
}