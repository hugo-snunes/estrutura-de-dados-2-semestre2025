#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura de um ITEM da lista ENCADEADA

typedef struct Item {
    
    int Chave;
    struct Item * Proximo;

} Item;

void ExibirLista(Item * Inicio); // Para lista não circular

void InserirItem(Item * Inicio, Item * I, int Posicao);
void ExcluirItem(Item * Inicio, int Posicao);

// Bloco principal

int main() {

    Item * A = (Item *) malloc (sizeof(Item));
    Item * B = (Item *) malloc (sizeof(Item));
    Item * C = (Item *) malloc (sizeof(Item));
    Item * D = (Item *) malloc (sizeof(Item));

    A->Chave = 17;
    B->Chave = 29;
    C->Chave = 41;
    D->Chave = 97;

    A->Proximo = NULL;
    B->Proximo = NULL;
    C->Proximo = NULL;
    D->Proximo = NULL; 

    // Alguns testes (printf's)

    printf("%X \t %d\n", A, A->Chave);
    printf("%X \t %d\n", B, B->Chave);
    printf("%X \t %d\n", C, C->Chave);
    printf("%X \t %d\n", D, D->Chave);

    // Construindo o encadeamento (LISTA CIRCULAR) A, B, C, D

    A->Proximo = B;
    B->Proximo = C;
    C->Proximo = D;
    D->Proximo = A; // Depois do último está o primeiro elemento

    // Percorrer a lista (visitar todos os nós da lista)

    printf("\nLista:\n\n");

    Item * X = A;

    for( int i = 0; i < 15; i++, X = X->Proximo) {
        printf("%X \t %d\n", X, X->Chave);
    }





}