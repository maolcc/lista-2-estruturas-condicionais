#include <stdio.h>

int main() {
    float altura;
    char sexo;
    float pesoIdeal;

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    if (sexo == 'M') {
        pesoIdeal = (72.7 * altura) - 58;
    } else if (sexo == 'F') {
        pesoIdeal = (62.1 * altura) - 44.7;
    } else {
        printf("Sexo invalido.\n");
        return 0;
    }

    printf("Peso ideal: %.2f kg\n", pesoIdeal);

    return 0;
}
