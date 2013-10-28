#include <stdio.h>

#define STR_SIZE 265

int getInput(char str[], int size);

int main(void) {
    char str[STR_SIZE] = { '\0' }; // initialisieren mit terminierungszeichen
    
    int strlen = getInput(str, STR_SIZE);
    
    printf("%d: %s\n", strlen, str);
    return 0;
}

/* getInput: brief version */
/*
int getInput(char str[], int size) {
    int c, i = 0;
    
    while((str[i++] = c = getchar()) != EOF && c != '\n' && i < size) 
        ;

    str[--i] = '\0';
    return i;
}
*/

/* getInput: verbose version */
int getInput(char str[], int size) {
    int c, i = 0;

    c = getchar();
    while(c != EOF && c != '\n' && i < size) {
        str[i] = c;
        c = getchar();
        ++i;
    }
    str[--i] = '\0';
    return i;
}

