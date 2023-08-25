#include <stdio.h>
#include <stdlib.h>

int main (){
    
    float pesoIdeal, altura;
    char sexo;

    printf ("Digite seu sexo: [M ou F]\n");
    scanf(" %c", &sexo);

    while (getchar() != '\n');

    while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {
        printf("Sexo inválido. Digite M para masculino ou F para feminino.\n");
        scanf(" %c", &sexo);
    }
    
    printf("Digite sua altura:");
    scanf("%f", &altura);

    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
    } else {
        pesoIdeal = (62.1 * altura) - 44.7;
    }

    printf ("Seu peso ideal eh: %f", pesoIdeal);
    return 0;
}