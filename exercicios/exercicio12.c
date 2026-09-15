#include <stdio.h>

int main() {
    int identificacao;
    float nota1, nota2, nota3, mediaExercicios;
    float mediaAproveitamento;
    char conceito;

    printf("Digite o numero de identificacao do aluno: ");
    scanf("%d", &identificacao);

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    printf("Digite a media dos exercicios: ");
    scanf("%f", &mediaExercicios);

    mediaAproveitamento =
        (nota1 + (nota2 * 2) + (nota3 * 3) + mediaExercicios) / 7;

    if (mediaAproveitamento >= 90) {
        conceito = 'A';
    } else if (mediaAproveitamento >= 75) {
        conceito = 'B';
    } else if (mediaAproveitamento >= 60) {
        conceito = 'C';
    } else if (mediaAproveitamento >= 40) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    printf("\n--- RESULTADO ---\n");
    printf("Identificacao: %d\n", identificacao);
    printf("Nota 1: %.2f\n", nota1);
    printf("Nota 2: %.2f\n", nota2);
    printf("Nota 3: %.2f\n", nota3);
    printf("Media dos exercicios: %.2f\n", mediaExercicios);
    printf("Media de aproveitamento: %.2f\n", mediaAproveitamento);
    printf("Conceito: %c\n", conceito);

    if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
        printf("Situacao: Aprovado\n");
    } else {
        printf("Situacao: Reprovado\n");
    }

    return 0;
}
