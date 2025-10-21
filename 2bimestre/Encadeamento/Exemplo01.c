#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura de um ITEM da lista ENCADEADA

typedef struct Item {
    
    int Chave;
    struct Item * Proximo;

} Item;

// Bloco principal

int main() {

    Item * I = (Item *) malloc (sizeof(Item));

    I->Chave = 23;
    I->Proximo = NULL;

    // Alguns testes (printf's)

    printf("Endereço (hexadecimal): %X\n", I);
    printf("%d\n", I->Chave);
    printf("%X (NULL)\n", I->Proximo);


}