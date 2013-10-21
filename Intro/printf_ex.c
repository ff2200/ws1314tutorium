/*
 * Vervollstaendigen Sie die printf Aufrufe
 * indem Sie die Variablen den richtigen printf(...)
 * Statements zuordnen
 * 
 * Probieren Sie a,b,c,d  mit dem Format %c, %o und  %x  aus.
 * Was stellen Sie fest?
 *
 * Compile mit 'make'
 */

#include <stdio.h>

int main(void) {
    // Deklaration, Definition und Initialisierung
    char a = 97;
    short b = 85;
    int c = 110;
    long d = 94;

    float e = 99.444;
    double f = 3234.9234234;

    // Aufgabe
    // eg: printf("Out: %c\n", c);
    printf("Out: %g\n", );
    printf("Out: %d\n", );
    printf("Out: %i\n", );
    printf("Out: %f\n", );
    printf("Out: %x\n", );
    printf("Out: %o\n", );

    // special trick question:
    // printf("Out: %p\n, );

    return 0;
}
