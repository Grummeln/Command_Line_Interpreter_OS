#include <stdio.h>
void helpMe(){
    printf("Welcome to Gremmie shell!\n");
    printf("Yes I am Grem, I know the nickname is dumb.\n");
    printf("You've chosen to get help, kekw\n");
    printf("Love you, the available commands are:\n");
    printf("cd, tail (-c, -n, -q, -v) and uniq (-i ,-d, -u)\n");
    printf("Everything else is not implemented by me, albeit you should be more aware of my part not working correctly\n");
    printf("For tail -q and -v there is now a bug, it requires to have some sort of character after (ex -q 5) to function correctly --- FIXED THIS\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢷⡀⠈⠓⠦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ \n"
           "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣄⢀⠀⠙⢧⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
           "⠀⠀⠀⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣈⣦⡈⠐⠐⡈⠳⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
           "⠀⠀⢸⢹⡂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⣾⣿⣿⡿⠟⠿⣷⣄⠀⠀⠂⠈⠻⢤⣤⣤⣶⡶⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
           "⠀⠀⡞⠈⡇⠀⠀⠀⠀⠀⠀⠀⢀⣤⣾⣿⣿⣿⠞⠯⢷⣷⣤⣿⣿⣷⣆⠀⠀⠀⢠⡿⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
           "⠀⠀⢳⠀⢻⡀⣀⣠⣤⣤⣤⣴⣿⣿⣿⢾⡛⢄⡫⣳⣾⣿⣟⡿⣻⠿⠛⠀⠀⠀⣼⣿⣿⣿⣖⡲⠒⠒⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
           "⠀⠀⠘⣦⠸⡇⢿⣿⣿⢿⣿⣻⣟⣶⣭⣙⢣⡉⢙⢶⣿⣿⣻⣷⣦⣀⠀⠀⠀⢸⣿⣿⣟⣾⣿⣿⣿⣶⡤⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
           "⠀⠀⠀⡇⠀⣷⠀⢻⣿⣿⣿⣟⣿⣿⢿⣿⣷⣍⠶⣌⠳⣬⠙⠿⣿⢿⣷⣦⣄⢺⣿⢯⣿⣽⢿⣻⣿⣍⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
           "⠀⠀⢠⡇⡀⣿⣇⠀⢻⣿⣧⡘⣿⣼⣿⡿⣿⣿⣧⡘⢧⡘⢿⣤⡘⠻⣿⢿⣿⣿⣟⣿⣻⣼⣿⣿⣿⣻⣧⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
           "⠀⠀⢸⡏⠀⢹⣿⣴⣿⣿⢿⣷⡿⠛⠻⣿⣻⢾⣯⡿⢦⡓⠀⢿⣿⣦⣄⠙⠶⢏⣿⣻⢿⣷⣻⣯⢿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
           "⠀⠀⢸⡇⠀⠘⣺⣿⡿⢛⣻⡟⠀⠀⡃⠈⠛⢯⡝⣿⢿⣳⣄⠀⢿⠻⣿⣟⠶⣦⣅⣛⣾⣿⣽⣿⣿⢿⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
           "⠀⠀⠀⡇⠀⠀⠙⢿⣿⣾⠹⡇⠀⠀⠃⢀⠀⠈⢻⣜⣧⠹⣿⣟⡜⡆⠹⣞⣿⣴⣋⢞⣻⡷⣿⣿⡟⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
           "⠀⠀⠀⡇⣀⣀⣀⣀⠙⢿⣷⣿⠀⠀⣘⣈⣀⣤⣀⠹⣞⡆⠀⠹⣎⢧⢀⢸⣿⢫⣽⡿⢵⣿⣯⣿⣿⡶⠶⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
           "⠀⠀⠀⠉⠁⠀⠀⠉⠙⠓⢿⣿⣦⡋⠀⣠⡶⡿⣿⠆⡘⠷⠀⠀⠘⣿⠀⠃⠃⠈⣧⠇⢰⠈⣿⡇⠻⠷⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
           "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣷⣿⣷⣭⠓⠒⢟⠁⠀⢱⠀⠀⠀⠀⠙⠀⠀⠀⠀⠙⢠⠏⣀⣸⣧⣤⣴⣾⣿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
           "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣧⣳⢦⠠⢡⡀⠈⠐⠄⠀⠀⢀⡀⠀⠀⢀⣤⣾⣾⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⣀⣠⣴⣦⡄⠀⠀\n"
           "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢺⠟⠁⡿⠀⢻⣿⡷⣄⡀⠀⠀⢀⡠⠔⠉⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣀⠀⣀⣠⣤⣾⣿⣿⣿⣿⣿⣿⣆⠀\n"
           "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠃⠙⠛⠦⣄⣀⠀⢀⣴⣾⣿⣿⣟⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧\n"
           "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣩⣿⣿⣿⣿⣿⣿⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣿⣿\n"
           "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
           "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡰⠲⣄⣠⡤⠤⠆⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
           "⠀⠀⠀⠀⠀⠀⠀⠀⢀⠴⠚⠋⢉⣠⣶⡿⠋⠀⣠⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡁⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
           "⠀⠀⠀⠀⠀⢀⣠⡴⢊⠐⢲⣿⡿⢟⠿⠀⠀⠀⡏⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
           "⠀⠀⠀⠀⠀⡇⠀⣁⢸⡴⡟⠛⠚⠋⠀⠀⠀⠈⡇⠀⠈⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
           "⠀⠀⠀⠀⢸⣿⣶⡟⠁⣸⠁⠀⠀⠀⠀⠀⠀⢀⡇⠀⣰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
           "⠀⠀⠀⠀⣼⡟⠁⠁⠙⢓⠀⠀⠀⢀⣠⠔⠊⠉⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
           "⠀⠀⠀⠀⣿⡏⠀⠀⠀⠀⠀⡠⠞⠉⠀⠀⢠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣻⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
           "⠀⠀⠀⠀⣿⠁⠀⠀⠀⠀⣿⡄⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
           "⠀⠀⢠⣴⣿⣿⣿⣿⣿⣷⣾⣅⠀⠀⠀⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
           "⠀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
           "⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
           "⢹⣿⣿⣻⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠋\n"
           "⢸⣿⣿⡿⣿⣿⣿⣿⣿⣿⣿⣿⡇⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿ \n⠀");

}