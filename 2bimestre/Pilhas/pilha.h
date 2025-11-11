#ifndef PILHA_H
#define PILHA_H

typedef struct Item {

    int Chave;
    struct Item * Anterior;

} Item;

Item * CriarItem(int Chave);

typedef struct Pilha {
    int Tamanho;
    Item * Topo;
} Pilha;

Item * CriarItem(int Chave);
Pilha * CriarPilha();

#endif