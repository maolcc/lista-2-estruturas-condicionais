#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    char sexo;
    char estadoCivil[20];
    int tempoCasamento;

    printf("Digite o nome: ");
    scanf(" %[^\n]", nome);

    printf("Digite o sexo (F/M): ");
    scanf(" %c", &sexo);

    printf("Digite o estado civil: ");
    scanf("%s", estadoCivil);

    if (sexo == 'F' && strcmp(estadoCivil, "CASADA") == 0) {
        printf("Digite o tempo de casamento em anos: ");
        scanf("%d", &tempoCasamento);

        printf("\nNome: %s\n", nome);
        printf("Tempo de casamento: %d anos\n", tempoCasamento);
    } else {
        printf("\nNome: %s\n", nome);
        printf("Nao e necessario informar o tempo de casamento.\n");
    }

    return 0;
}
