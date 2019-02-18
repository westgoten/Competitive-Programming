#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

#define MAX 1000

typedef struct {
    int topo;
    int *elementos;
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

void push(Pilha *pilha, int novoElemento) {
    pilha->topo++;
    pilha->elementos = (int*)realloc(pilha->elementos, sizeof(int)*pilha->topo);
    pilha->elementos[pilha->topo - 1] = novoElemento;
}

int pop(Pilha *pilha) {
    if (isStackEmpty(pilha)) {
        return -1;
    } else {
        int elementoRetirado = pilha->elementos[pilha->topo - 1];
        pilha->topo--;
        pilha->elementos = (int*)realloc(pilha->elementos, sizeof(int)*pilha->topo);

        return elementoRetirado;
    }
}

int main(void) {
    Pilha pilha;
    char *input = (char*)calloc(MAX, sizeof(char));
    input = fgets(input, MAX, stdin);
    while (input != NULL) {
        inicializarPilha(&pilha);
        int i, result = 0, len = strlen(input);
        for (i = 0; i < len; i++) {
            if (input[i] == '(') {
                push(&pilha, 1);
            } else if (input[i] == ')') {
                result = pop(&pilha);
                if (result < 0) {
                    break;
                }
            }
        }

        if (result < 0) {
            printf("incorrect\n");
        } else {
            if (isStackEmpty(&pilha))
                printf("correct\n");
            else
                printf("incorrect\n");
        }

        input = fgets(input, MAX, stdin);
    }
}
