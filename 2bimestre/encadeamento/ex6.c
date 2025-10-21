#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura de um ITEM da lista ENCADEADA

typedef struct Item {
    int Chave;
    struct Item * Proximo;
} Item;

void ExibirLista(Item * Inicio); // Para lista nao circular
void InserirItem(Item * Inicio, Item * I, int Posicao);
void ExcluirItem(Item * Inicio, int Posicao);

// Bloco Principal

int main() {

    Item * A = (Item *) malloc (sizeof(Item));
    Item * B = (Item *) malloc (sizeof(Item));
    Item * C = (Item *) malloc (sizeof(Item));
    Item * D = (Item *) malloc (sizeof(Item));

    A->Chave = CriarItem(17);
    B->Chave = CriarItem(29);
    C->Chave = CriarItem(41);
    D->Chave = CriarItem(97);

    // Lista A, B, C, D

    A->Proximo = B;
    B->Proximo = C;
    C->Proximo = D;

}

Item * CriarItem(int Chave) {
    Item * X = (Item *) malloc(sizeof(Item));
    X->Chave = Chave;
    X->Proximo = NULL;
    return X;
}
    