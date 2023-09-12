#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int menu, a, b, resultado;

    do{
        printf ("Digite sua opcao:\n");
        printf (" 0 - Sair\n");
        printf (" 1 - Adicao\n");
        printf (" 2 - Subtracao:\n");
        printf (" 3 - Multiplicacao:\n");
        printf (" 4 - Divisao:\n");

        scanf ("%d", &menu);
    
        if (menu == 0) return 0;

        printf("Digite os operandos:\n");
        scanf ("%d", &a);

        printf("Digite os operandos:\n");
        scanf ("%d", &b);

        switch (menu){
            case 1:
                resultado = a+b;
                break;
            case 2:
                resultado = a-b;
                break;
            case 3:
                resultado = a*b;
                break;
            case 4:
                resultado = a / b;
                break; 
        }
        printf ("%d\n", resultado);
    }while (menu >= 0 && menu <=4);

    return 0;
}