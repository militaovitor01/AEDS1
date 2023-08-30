#include <stdio.h>
#include <stdlib.h>

int main (){
    int a, b, c;

    printf ("Digite os valores de A, B e C:\n");
    scanf ("%i %i %i", &a, &b, &c);

    if (a + b < c){
        printf ("A soma de a + b eh menor que c!");
    }else{
        printf("A soma de a + b eh maior que c!");
    }
    return 0;
}