#include <stdio.h>

int main() {
    float a, b, c;
    printf("Digite o coeficiente 'a': ");
    scanf("%f", &a);

    printf("Digite o coeficiente 'b': ");
    scanf("%f", &b);

    printf("Digite o coeficiente 'c': ");
    scanf("%f", &c);

    if (a == 0) {
        printf("Coeficiente 'a' não pode ser zero para uma equação de segundo grau.\n");
    } else {
        float delta = b * b - 4 * a * c;

        if (delta > 0) {
            float sqrt_delta = 0.0;
            float x1 = 0.0, x2 = 0.0;

            for (int i = 0; i <= 1000; i++) {
                if (i * i > delta) {
                    sqrt_delta = (i - 1) + (delta - (i - 1) * (i - 1)) / (2 * (i - 1));
                    break;
                }
            }

            x1 = (-b + sqrt_delta) / (2 * a);
            x2 = (-b - sqrt_delta) / (2 * a);

            printf("As raízes são x1 = %.2f e x2 = %.2f\n", x1, x2);
        } else if (delta == 0) {
            float x = -b / (2 * a);
            printf("A raiz é x = %.2f\n", x);
        } else {
            printf("A equação não possui raízes reais.\n");
        }
    }

    return 0;
}
