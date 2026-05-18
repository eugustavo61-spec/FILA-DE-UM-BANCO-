#include <stdio.h>
#include <string.h>

#define MAX 10

char fila[MAX][50];
int inicio = 0;
int fim = 0;

void adicionarCliente() {
    if (fim == MAX) {
        printf("Fila cheia!\n");
        return;
    }

    printf("Nome do cliente: ");
    scanf("%s", fila[fim]);

    fim++;

    printf("Cliente adicionado!\n");
}
void chamarProximo() {
    if (inicio == fim) {
        printf("Fila vazia!\n");
        return;
    }

    printf("Proximo cliente: %s\n", fila[inicio]);
}
void removerCliente() {
    if (inicio == fim) {
        printf("Fila vazia!\n");
        return;
    }
printf("Cliente atendido: %s\n", fila[inicio]);
    inicio++;
}
void visualizarFila() {
    if (inicio == fim) {
        printf("Fila vazia!\n");
        return;
    }

    printf("\n--- FILA ---\n");

    for (int i = inicio; i < fim; i++) {
        printf("%d - %s\n", i - inicio + 1, fila[i]);
    }
}
int main() {
    int opcao;

    do {
        printf("\n1 - Adicionar cliente\n");
        printf("2 - Chamar proximo\n");
        printf("3 - Remover atendido\n");
        printf("4 - Ver fila\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                adicionarCliente();
                break;
            case 2:
                chamarProximo();
                break;
            case 3:
                removerCliente();
                break;
            case 4:
                visualizarFila();
                break;
            case 0:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }

    } while(opcao != 0);

    return 0;
}