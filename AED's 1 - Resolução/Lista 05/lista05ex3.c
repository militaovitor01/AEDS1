#include <stdio.h>
#include <stdlib.h>

void confereBissexto(int ano){
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
        printf ("Eh bissexto!\n");
    }else{
        printf ("Nao bissexto!\n");
    }
}

int main (){

    int ano;
    char resposta;

    do{
        printf ("Digite o ano!\n");
        scanf ("%d", &ano);
        
        confereBissexto(ano);    
    
        printf ("Deseja testar um novo valor? [S/N]\n");     
        
        do{
            scanf (" %c", &resposta);
            if(resposta != 'S' && resposta != 'N'){
                printf ("Digite um valor valido!\n");
            }
        }while (resposta != 'S' && resposta != 'N');
        
        if (resposta == 'N') return 0;
                      
    }while (resposta == 'S');

    return 0;
}