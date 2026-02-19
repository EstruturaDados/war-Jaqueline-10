#include <stdio.h>
#include <string.h>

#define TOTAL_TERRITORIOS 5
#define TAM_NOME 50
#define TAM_COR 30

typedef struct {
    char nome[TAM_NOME];
    char corExercito[TAM_COR];
    int numeroTropas;
} Territorio;

int main() {

    Territorio territorios[TOTAL_TERRITORIOS];

    printf("=== Cadastro Inicial dos Territorios ===\n\n");

    for (int i = 0; i < TOTAL_TERRITORIOS; i++) {

        printf("Territorio %d\n", i + 1);

        getchar();

        printf("Nome do territorio: ");
        fgets(territorios[i].nome, TAM_NOME, stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0';

        printf("Cor do exercito dominante: ");
        fgets(territorios[i].corExercito, TAM_COR, stdin);
        territorios[i].corExercito[strcspn(territorios[i].corExercito, "\n")] = '\0';

        printf("Numero de tropas: ");
        scanf("%d", &territorios[i].numeroTropas);

        printf("\n");
    }

    printf("\n=== Estado Atual do Mapa ===\n\n");

    for (int i = 0; i < TOTAL_TERRITORIOS; i++) {
        printf("Territorio %d\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exercito: %s\n", territorios[i].corExercito);
        printf("Numero de Tropas: %d\n", territorios[i].numeroTropas);
        printf("-----------------------------\n");
    }

    return 0;
}
