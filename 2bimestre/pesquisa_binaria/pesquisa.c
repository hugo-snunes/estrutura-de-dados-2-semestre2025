#include <stdio.h>
#include <stdlib.h>

//Pré-requisito: O vetor deve estar ordenado.

#define ERRO -1 // O elemento chave não está no vetor

int PB(int * V, int N, int Chave); // Pesquisa Binária
int PBR(int * V, int Esquerda, int Direita, int Chave); // Pesquisa Binária Recursiva

int main() {

    int Numeros[] = {1, 2, 4, 5, 6, 7, 8, 10, 12, 14, 16, 18, 20, 21, 22};
    int Tamanho = sizeof(Numeros) / sizeof(int);
    int Elemento = 12;
    int Posicao = PBR(Numeros, 0, 14, Elemento);


    if(Posicao != ERRO) printf("A Posicao e %d\n", Posicao);
    else printf("Elemento não está no vetor.\n");
}

int PB(int * V, int N, int Chave) {
    int Esquerda = 0;
    int Direita = N - 1;

    while(Esquerda <= Direita){
        int Meio = (Esquerda + Direita) / 2;
        if (V[Meio] == Chave) return Meio;
        else if(V[Meio] < Chave) Esquerda = Meio + 1;
        else Direita = Meio - 1;
    }

    return ERRO;
}

int PBR(int * V, int Esquerda, int Direita, int Chave){
    
    if(Esquerda > Direita) return ERRO;

    int Meio = (Esquerda + Direita) / 2;

    if(V[Meio] == Chave) return Meio;
    else if (V[Meio] < Chave) return PBR(V, Meio + 1, Direita, Chave);

    else return PBR(V, Esquerda, Meio - 1, Chave);
}
