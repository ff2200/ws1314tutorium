#include <ctype.h>
#include <stdio.h>

char* trim(char[]);

int main(void) {
    char test[] = " teste \t mich \n asdf";

    printf("%s", trim(test));
    return 0;
}

#define RESULT_MAX 256
char result[RESULT_MAX];

char* trim(char t[]) {
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














