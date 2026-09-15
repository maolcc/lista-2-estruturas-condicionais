#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        numero = numero + 5;
    } else {
        numero = numero + 8;
    }

    printf("Resultado: %d\n", numero);

    return 0;
}
