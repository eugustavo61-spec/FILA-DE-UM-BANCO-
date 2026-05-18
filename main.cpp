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