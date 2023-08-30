#include <stdio.h>
#include <stdlib.h>

int main (){
    int a, b, c;

    printf ("Digite os valores de A, B e C:\n");
    scanf ("%i %i %i", &a, &b, &c);

    if ((a > b && a < c ) || (a < b && a > c)){
        printf ("%i eh o segundo maior valor!", a);
    }else if ((b > a && b < c) || (b < a && b > c)){
        printf ("%i eh o segundo maior valor!", b);
    }else if((c > b && c < a) || (c < b && c > a)){
        printf ("%i eh o segundo maior valor!", c);
    }

    return 0;
}