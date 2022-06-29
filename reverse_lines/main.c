#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    
    size_t bufsize = 0xffff, count;
    char* buffer = malloc(sizeof(char) * bufsize);

    while ((count = getline(&buffer,&bufsize, stdin)) < bufsize){
        for (int i = count; i >= 0; i--){
            fprintf(stdout, "%c", buffer[i]);
        }
    }
    fprintf(stdout, "\n");

    free(buffer);
    return 0;
}