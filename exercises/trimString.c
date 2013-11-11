#include <ctype.h>

char* trim(char[]);

int main(void) {
    char test[] = " teste \t mich \n asdf";

    printf("%s", trim(test));
    return 0;
}

char* trim(char[] t) {
    int i; // das hat im tutorium gefehlt, wir sprechen noch darueber
    for(i=0;t[i] != '\0';++i) {
        if(isblank(t[i]) || t[i] == '\n') {
            
        }
        else {

        }
    }


}














