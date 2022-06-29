#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char** argv){
    if (argc != 2){
        fprintf(stderr, "Provide a second argument containing a character\n");
        return 1;
    }
    if (strlen(argv[1]) != 1){
        fprintf(stderr, "Provide a second argument containing a character\n");
        return 1;
    }
    char c;
    while((c = getchar()) != EOF){
        if (c == argv[1][0]) continue;
        fprintf(stdout, "%c", c);
    }
    return 0;
}