char* nachB(char* orig) {
    int l = strlen(orig) + 2 * zaehleVokal(orig) + 1;
    char* str = calloc(l, sizeof(char));
    // str = malloc(l * sizeof(char));
    
    int k = 0, i = 0;
    for(; i<strlen(orig) && k < l; ++i, ++k) {
        str[k] = orig[i];
        if (istVokal(orig[i])) {
            str[++k] = 'b';
            str[++k] = orig[i];
        }
    }

    return str;
}


int zaehleVokale(char* str) {
    int i,v = 0;

    for(i=0; i<strlen(str); ++i) 
        // istVokal(*(str+i))
        if (istVokal(str[i]))
            ++v;

    return v;
}



#include <stdbool.h>

bool istVokal(char c) {
    switch(c) {
        case 'a': // explicit fallthrough
        case 'e': 
        ...
        case 'i':return true;
        default :return false;
    }

    if(c == 'a' || ...
            return true;
    else 
        return false;

    return (c == 'a' || ...);

}
