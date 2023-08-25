#include <stdio.h>
#include <stdlib.h>

int main (){
    
    float area, raio;

    printf ("Digite o raio!\n");
    scanf ("%f", &raio);

    area = 3.14 * (raio*raio);
    printf ("Um circulo de raio %f, possui area de %f", raio, area);

    return 0;
}