#include <stdio.h>
#include <stdlib.h>

int main (){
    
    double fahrenheit, celcius;

    printf ("Digite a temperatura em celcius!\n");
    scanf ("%lf", &celcius);

    fahrenheit = celcius * 1.8 + 32;

    printf ("A temperatura %lf em graus celcius, correspode a %lf graus fahrenheit", celcius, fahrenheit);

    return 0;
}