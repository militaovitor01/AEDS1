#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int menu;

    printf ("Digite o dia da semana[1...7]:\n");
    
    do{
        scanf ("%d", &menu);        
        if(menu <= 0 || menu > 7){
            printf ("Digite um valor valido!\n");
        }
    }while(menu <= 0 || menu > 7);

    switch (menu){
        case 1:
            printf ("Domingo!\n");
            break;
        case 2:
            printf ("Segunda!\n");
            break;
        case 3:
            printf ("Terca!\n");
        case 4:
            printf ("Quarta!\n");
            break; 
        case 5:
            printf ("Quinta!\n");
            break;
        case 6:
            printf ("Sexta!\n");
            break;
        case 7:
            printf ("Sabado!\n");
            break;
    }

    return 0;
}