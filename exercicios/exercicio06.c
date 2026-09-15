#include <stdio.h>

int main() {
    int valor1, valor2;

    printf("Digite o primeiro valor (1 para verdadeiro e 0 para falso): ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor (1 para verdadeiro e 0 para falso): ");
    scanf("%d", &valor2);

    if (valor1 == 1 && valor2 == 1) {
        printf("Ambos sao VERDADEIROS.\n");
    } else if (valor1 == 0 && valor2 == 0) {
        printf("Ambos sao FALSOS.\n");
    } else {
        printf("Os valores sao diferentes.\n");
    }

    return 0;
}
