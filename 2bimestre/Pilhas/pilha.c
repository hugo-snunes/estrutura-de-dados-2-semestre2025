#include <stdio.h>
#include <stdlib.h>

#include "pilha.h"

Item * CriarItem(int Chave) {

    Item * I = (Item *) malloc(sizeof(Item));
    if (I == NULL){
        printf("ERRO, erro de memoria\n");
        return NULL;
    }

    I->Chave = Chave;
    I->Anterior = NULL;

    return I;
}

Pilha * CriarPilha() {

    Pilha * P = (Pilha *) malloc(sizeof(Pilha));
    if (P == NULL){
        printf("ERRO, erro de memoria\n");
        return NULL;
    }

    P->Tamanho = 0;
    P->Topo = NULL;

    return P;

}

void empilhar(Pilha * P, Item * I){
    I->Anterior = P->Topo;
    P->Topo = I;
    P->Tamanho++;
}


