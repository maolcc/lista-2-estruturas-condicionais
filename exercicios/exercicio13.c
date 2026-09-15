#include <stdio.h>

int main() {
    float limite, velocidade;
    float percentual;

    printf("Digite a velocidade maxima permitida: ");
    scanf("%f", &limite);

    printf("Digite a velocidade registrada: ");
    scanf("%f", &velocidade);

    printf("\n--- RESULTADO ---\n");
    printf("Limite da via: %.2f km/h\n", limite);
    printf("Velocidade registrada: %.2f km/h\n", velocidade);

    if (velocidade <= limite) {
        printf("Nao houve infracao.\n");
    } else {
        percentual = ((velocidade - limite) / limite) * 100;

        printf("Percentual excedido: %.2f%%\n", percentual);

        if (percentual <= 20) {
            printf("Classificacao: Infracao media.\n");
        } else if (percentual <= 50) {
            printf("Classificacao: Infracao grave.\n");
        } else {
            printf("Classificacao: Infracao gravissima.\n");
        }

        if (velocidade > 120) {
            printf("ALERTA: Velocidade extremamente elevada!\n");
        }
    }

    return 0;
}
