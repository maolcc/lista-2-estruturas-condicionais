#include <stdio.h>

int main() {
    int A, B, C;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    if (A + B < C) {
        printf("A soma de A + B e menor que C.\n");
    } else {
        printf("A soma de A + B nao e menor que C.\n");
    }

    return 0;
}
