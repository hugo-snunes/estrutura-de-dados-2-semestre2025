#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    char Chave;

    // Árvore BINÁRIA

    struct No * Esquerda; // 1° Filho
    struct No * Direita; // 2° Filho
    
} No;

No * criarNo(char Chave) {

    No * N = (No *) malloc(sizeof(No));
    if (N == NULL){
        printf("ERRO: nao ha memoria para o no.\n");
        return NULL;
    }

    N->Chave = Chave;

    N->Esquerda = NULL;
    N->Direita = NULL;

    return N;
}

int main(){
    No * A = criarNo('a');
    No * B = criarNo('b');
    No * C = criarNo('c');
    No * D = criarNo('d');

    A->Esquerda = B;
    A->Direita = C;
    C->Direita = D;

    printf("%c", A->Direita->Direita->Chave);

}
