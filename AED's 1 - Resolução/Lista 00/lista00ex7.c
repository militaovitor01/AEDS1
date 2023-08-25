#include <stdio.h>
#include <stdlib.h>

int main (){
    
    float pesoIdeal, altura;

    printf ("Digite sua altura!\n");
    scanf ("%f", &altura);

    pesoIdeal = (72.7 * altura) - 58;
    printf ("Seu peso ideal é: %f", pesoIdeal);
    
    return 0;
}