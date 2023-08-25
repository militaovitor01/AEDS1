#include <stdio.h>
#include <stdlib.h>

int main (){

    int lado1, lado2, lado3;

    printf ("Digite os lados de um triangulo:\n");
    scanf ("%d %d %d", &lado1, &lado2, &lado3);

    while(!(lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1 && lado1 + lado2 + lado3 > 0)){
        printf ("Digite valores validos:\n");
        scanf ("%d %d %d", &lado1, &lado2, &lado3);
    }

    if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
        printf ("Escaleno!");
    }else if (lado1 == lado2 && lado1 == lado3 && lado2 == lado3){
        printf ("Equilatero!");
    }else if (lado1 == lado2 || lado1 == lado3 || lado3 == lado2){
        printf ("Isoceles!");
    }

    return 0;
}

