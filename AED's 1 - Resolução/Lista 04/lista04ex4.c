#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int menu;
    float peso, peso_alterado;

    printf ("Digite o planeta! [1...6]\n");
    printf (" 1 - Mercurio\n");
    printf (" 2 - Venus\n");
    printf (" 3 - Marte\n");
    printf (" 4 - Jupiter\n");
    printf (" 5 - Saturno\n");
    printf (" 6 - Urano:\n");
    do{
        scanf ("%d", &menu);

        if (menu < 0 || menu > 6){
            printf ("Digite um valor valido!\n");
        }
    }while (menu < 0 || menu > 6);
       
    printf ("Digite o seu peso!\n");
    scanf ("%f", &peso);

    switch (menu)
    {
    case 1:
        peso_alterado = peso * 0.37;
        break;
    case 2:
        peso_alterado = peso * 0.88;
        break;
    case 3:
        peso_alterado = peso * 0.38;
        break;
    case 4:
        peso_alterado = peso * 2.64;
        break;
    case 5:
        peso_alterado = peso * 1.15;
        break;
    case 6:
        peso_alterado = peso * 1.17;
        break;
    }

    printf ("Seu peso no planeta %d, eh de %f", menu, peso_alterado);

    return 0;
}