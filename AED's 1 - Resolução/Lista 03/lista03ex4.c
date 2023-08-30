#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;

    printf("Digite os valores de a, b e c: ");
    scanf("%i %i %i", &a, &b, &c);

    if (a <= b && a <= c) {
        if (b <= c) {
            printf("%i %i %i\n", a, b, c);
        } else {
            printf("%i %i %i\n", a, c, b);
        }
    } else if (b <= a && b <= c) {
        if (a <= c) {
            printf("%i %i %i\n", b, a, c);
        } else {
            printf("%i %i %i\n", b, c, a);
        }
    } else {
        if (a <= b) {
            printf("%i %i %i\n", c, a, b);
        } else {
            printf("%i %i %i\n", c, b, a);
        }
    }

    return 0;
}
