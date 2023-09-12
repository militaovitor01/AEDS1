#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int menu;

    printf ("Digite o mes! [1...12]:\n");
    
    do{
        scanf ("%d", &menu);        
        if(menu <= 0 || menu > 12){
            printf ("Digite um valor valido!\n");
        }
    }while(menu <= 0 || menu > 12);

    switch (menu){
        case 1:
            printf ("Janeiro - 31 Dias!\n");
            break;
        case 2:
            printf ("Fevereiro - 28 Dias!\n");
            break;
        case 3:
            printf ("Marco - 31 Dias!\n");
            break;
        case 4:
            printf ("Abril - 30 Dias!\n");
            break; 
        case 5:
            printf ("Maio - 31 Dias!\n");
            break;        
        case 6:
            printf ("Junho - 30 Dias!\n");
            break;
        case 7:
            printf ("Julho - 30 Dias!\n");
            break;
        case 8:
            printf ("Agosto - 31 Dias!\n");
            break;
        case 9:
            printf ("Setembro - 30 Dias!\n");
            break;
        case 10:
            printf ("Outubro - 31 Dias!\n");
            break;
        case 11:
            printf ("Novembro - 30 Dias!\n");
            break;
        case 12:
            printf ("Dezembro - 31 Dias!\n");
            break;
    }

    return 0;
}