#include <stdio.h>
#include <stdlib.h>

int main (){
    
    float pesoIdeal, altura;

    printf ("Digite sua altura!\n");
    scanf ("%f", &altura);

    pesoIdeal = (62.1 * altura) - 44.7;
    printf ("Seu peso ideal é: %f", pesoIdeal);
    
    return 0;
}