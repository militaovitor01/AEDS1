int main (){

    int ano;

    printf ("Digite o ano:");
    scanf ("%d", &ano);

    if (ano % 4 == 0){
        printf ("Bissexto!");
    }else{
        printf ("Nao Bissexto!");
    }

    return 0;
}