#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    char Chave;
    struct No * F1; // 1° Filho
    struct No * F2; 
    struct No * F3;

    // Outra Possibilidade:
    struct No * F[3]; // Filhos F[0], F[1], F[2]
    
    
} No;

No * criarNo(char Chave) {

    No * N = (No *) malloc(sizeof(No));
    if (N == NULL){
        printf("ERRO: nao ha memoria para o no.\n");
        return NULL;
    }

    N->Chave = Chave;
    N->F1 = NULL;
    N->F2 = NULL;
    N->F3 = NULL;

    for(int i = 0; i < 3; i++) N->F[i] = NULL;
    return N;

}
