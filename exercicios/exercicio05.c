#include <stdio.h>

int main() {
    int numero;
    int resultado;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 0) {
        resultado = numero * 2;
    } else if (numero < 0) {
        resultado = numero * 3;
    } else {
        resultado = 0;
    }

    printf("Resultado: %d\n", resultado);

    return 0;
}
