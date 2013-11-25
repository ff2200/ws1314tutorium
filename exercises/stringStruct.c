#include <stdio.h>
#include <string.h>

#define MAX 256
typedef struct Str {
    int len;
    char str[MAX];
} Str;

Str* reverse(Str*);

int main(void) {
    Str test = {.len=0, .str="asdf asdg asdq"};
    test.len = strlen(test.str); 

    //printf("%s", (*reverse(&test)).str);
    printf("%s", reverse(&test)->str);

    return 0;
}


Str* reverse(Str* t) {
    int k = t->len - 1;
    char tmp;
    for(int i=0; t->str[i] != '\0'; ++i) {

    }
}




