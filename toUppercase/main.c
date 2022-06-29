#include <stdio.h>
#include <ctype.h>

int main(void){
    char c;
    while((c = getchar()) != EOF){
        fprintf(stdout, "%c", toupper(c));
    }
    return 0;
}