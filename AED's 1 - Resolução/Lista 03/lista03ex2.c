#include <stdio.h>
#include <stdlib.h>

int main (){
    int a, b, c;

    printf ("Digite os valores de A, B e C:\n");
    scanf ("%i %i %i", &a, &b, &c);

    if (a > b && a > c){
        printf ("%i eh o maior valor!", a);
    }else if (b > a && b > c){
        printf ("%i eh o maior valor!", b);
    }else{
        printf ("%i eh o maior valor!", c);
    }
    return 0;
}