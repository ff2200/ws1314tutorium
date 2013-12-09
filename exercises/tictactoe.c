#include <stdbool.h>
#include <stdio.h>

#define SIZE 3
#define NO_GLYPH '_'

bool set_x(char ar[][SIZE], unsigned int, unsigned int);
bool set_o(char ar[][SIZE],unsigned int, unsigned int);
bool set_glyph(char*, unsigned int, unsigned int, char);


int main(void) {
    char tictactoe[SIZE][SIZE];
    for(int i=0;i<SIZE; ++i)
        for(int j=0; j<SIZE; ++j)
            tictactoe[i][j] = NO_GLYPH;
    
    set_x(tictactoe, 1, 1);
    set_o(tictactoe, 2, 1);

    for(int i=0; i < SIZE; ++i) {
        for(int j=0; j < SIZE; ++j)
            printf("%c ", tictactoe[i][j]);
        printf("\n");
    }


    return 0;
}



bool set_x(char ar[][SIZE], unsigned int x, unsigned int y) {
    void* ar_p = ar;
    return set_glyph(ar_p, x, y, 'x');
}



bool set_o(char ar[][SIZE], unsigned int x, unsigned int y) {
    void* ar_p = ar;
    return set_glyph(ar_p, x, y, 'o');
}


bool set_glyph(char* ar, unsigned int x, unsigned int y, char glyph) {
    char* ar_ptr = (ar + (x * SIZE + y) * sizeof(char));
    if(*ar_ptr == NO_GLYPH) {
        *ar_ptr = glyph;
        return true;
    }
    printf("%d/%d schon belegt\n", x,y);
    return false;
}









