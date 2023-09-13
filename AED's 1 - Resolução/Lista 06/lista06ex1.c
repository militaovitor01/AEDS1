#include <stdio.h>

int main() {
    
    int voto, vencedor, votos_total = 0, chapa1 = 0, chapa2 = 0, nulos = 0;
    float percentual;

    printf("Eleicao DA:\n");
    printf("0 - Sair\n");
    printf("1 - Chapa 1\n");
    printf("2 - Chapa 2\n");
    printf("3 - Voto nulo ou em branco\n");

    do {
        printf("Digite seu voto:\n");
        scanf("%d", &voto);

        if (voto < 0 || voto > 3) {
            printf("Digite um valor valido!\n");
        } else {
            switch (voto) {
                case 1:
                    chapa1++;
                    break;
                case 2:
                    chapa2++;
                    break;
                case 3:
                    nulos++;
                    break;
                case 0:
                    break;
            }
        }

    } while (voto != 0);

    if (chapa1 > chapa2) {
        vencedor = chapa1;
        printf("Chapa 1 venceu!\n");
    } else if (chapa2 > chapa1) {
        vencedor = chapa2;
        printf("Chapa 2 venceu!\n");
    } else if (chapa1 == chapa2) {
        printf("Empate!\n");
    }

    votos_total = chapa1 + chapa2 + nulos;

    printf("Chapa 1: %d votos\n", chapa1);
    printf("Chapa 2: %d votos\n", chapa2);
    printf("Nulos: %d votos\n", nulos);
    printf("Total de %d votos\n", votos_total);

    if (votos_total > 0) {
        percentual = ((float)vencedor / votos_total) * 100;
        printf("Percentual de votos do vencedor: %.2f%%\n", percentual);
    } else {
        printf("Nenhum voto registrado.\n");
    }

    return 0;
}
