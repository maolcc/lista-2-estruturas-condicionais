#include <stdio.h>

int main() {
    float preco, valorFinal;
    int codigo;

    printf("Digite o preco do produto: R$ ");
    scanf("%f", &preco);

    printf("Digite o codigo da forma de pagamento: ");
    scanf("%d", &codigo);

    if (codigo == 1) {
        valorFinal = preco - (preco * 0.10);
    } else if (codigo == 2) {
        valorFinal = preco - (preco * 0.15);
    } else if (codigo == 3) {
        valorFinal = preco;
    } else if (codigo == 4) {
        valorFinal = preco + (preco * 0.10);
    } else {
        printf("Codigo de pagamento invalido.\n");
        return 0;
    }

    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}
