#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv){
    
    if (argc != 2){
        fprintf(stderr, "provide exactly one argument to be processed by grep\n");
    }

    size_t bufsize = 0xffff, count;
    char* buffer = malloc(sizeof(char) * bufsize);

    size_t arg_size = strlen(argv[1]);
    
    while ((count = getline(&buffer,&bufsize, stdin)) < bufsize){
        for (size_t i = 0; i < count; i++){
            int done = 1;
            if (buffer[i] == argv[1][0] && i+arg_size < count){
                for (size_t j = 1; j < arg_size; j++){
                    if (buffer[i+j] != argv[1][j]){
                        done = 0;
                    }
                }
            } else {
                done = 0;
            }
            if (done){
                fprintf(stdout, "%s", buffer);
                break;
            }
        }
        
    }
    fprintf(stdout, "\n");

    free(buffer);
    return 0;
}