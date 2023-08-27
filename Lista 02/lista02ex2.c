#include <stdio.h>

int main() {
    int a, b, opcao, resultado;

    printf("Digite sua opcao:\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Divisao\n");
    scanf("%d", &opcao);

    while (opcao > 0 && opcao < 4) {
        if (opcao == 1) {
            printf("Digite o primeiro valor:\n");
            scanf("%d", &a);

            printf("Digite o segundo valor:\n");
            scanf("%d", &b);

            resultado = a + b;
            printf("%d\n", resultado);
        } else if (opcao == 2) {
            printf("Digite o primeiro valor:\n");
            scanf("%d", &a);

            printf("Digite o segundo valor:\n");
            scanf("%d", &b);

            resultado = a - b;
            printf("%d\n", resultado);
        } else if (opcao == 3) {
            printf("Digite o primeiro valor:\n");
            scanf("%d", &a);

            printf("Digite o segundo valor:\n");
            scanf("%d", &b);

            if (b != 0) {
                resultado = a / b;
                printf("Resultado: %d\n", resultado);
            } else {
                printf("Erro: Divisão por zero\n");
            }
        }

        printf("Digite sua opção:\n");
        printf("1 - Adição\n");
        printf("2 - Subtração\n");
        printf("3 - Divisão\n");
        scanf("%d", &opcao);
    }

    return 0;
}
