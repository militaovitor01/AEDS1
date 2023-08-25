#include <stdio.h>
#include <stdlib.h>

int main (){
    
    double fahrenheit, celcius = 37.777777;

    fahrenheit = celcius * 1.8 + 32;

    printf ("A temperatura %f em graus celcius, correspode a %f graus fahrenheit", celcius, fahrenheit);

    return 0;
}