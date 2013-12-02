#include <ctype.h>
#include <stdio.h>

char* trim(char[], char*);

#define RESULT_MAX 256

int main(void) {
    char test[] = " teste \t mich \n asdf";
    char result[RESULT_MAX];
    
    printf("%s",trim(test,result));
    return 0;
}


char* trim(char t[], char* result) {
    int i,k = 0; 

    for(i=0;t[i] != '\0';++i) {
        if(k >= RESULT_MAX - 1) break; 
        if(!(isblank(t[i]) || t[i] == '\n')) {
            result[k++] = t[i];
        }
    }
    result[k] = '\0';
    return result;
}














