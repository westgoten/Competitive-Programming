#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

typedef struct {
    int topo;
    int **elementos;
} Pilha;

void inicializarPilha(Pilha *pilha) {
    pilha->topo = 0;
    pilha->elementos = NULL;
}

int isStackEmpty(Pilha *pilha) {
    if (pilha->topo == 0)
        return 1;
    else
        return 0;
}

void push(Pilha *pilha, int *novoElemento) {
    pilha->topo++;
    pilha->elementos = (int**)realloc(pilha->elementos, sizeof(int*)*pilha->topo);
    pilha->elementos[pilha->topo - 1] = novoElemento;
}

int* pop(Pilha *pilha) {
    assert(!isStackEmpty(pilha));

    int *elementoRetirado = pilha->elementos[pilha->topo - 1];
    pilha->topo--;

    return elementoRetirado;
}

int main() {
    Pilha pilha;
    int n, k, c, s;

    scanf("%d %d", &n, &k);

    while (n != 0 && k != 0) {
        char result[4] = "Sim";
        inicializarPilha(&pilha);
        for (int i = 0; i < n; i++) {
            scanf("%d %d", &c, &s);
            int *novoElemento = (int*)malloc(2 * sizeof(int));
            novoElemento[0] = c;
            novoElemento[1] = s;

            if (isStackEmpty(&pilha))
                push(&pilha, novoElemento);
            else {
                int tamanho = pilha.topo;
                for (int j = 0; j < tamanho; j++) {
                    int saidaDoUltimo = pilha.elementos[pilha.topo - 1][1];
                    if (saidaDoUltimo <= novoElemento[0])
                        pop(&pilha);
                    else
                        break;
                }

                if (pilha.topo == k) {
                    strcpy(result, "Nao");
                } else {
                    if (!isStackEmpty(&pilha)) {
                        if (pilha.elementos[pilha.topo - 1][1] < novoElemento[1])
                            strcpy(result, "Nao");
                    }

                    push(&pilha, novoElemento);
                }
            }
        }

        printf("%s\n", result);
        scanf("%d %d", &n, &k);
    }
}
