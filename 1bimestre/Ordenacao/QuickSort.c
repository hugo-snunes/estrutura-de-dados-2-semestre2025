#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void TrocarElemento(int * A, int * B);
int Particao(int * V, int Inf, int Sup);
void QuickSort (int * V, int Inf, int Sup);
void ExibirVetor(int * V, int N);

void InsertionSort(int * V, int N);

#define TAMANHO 500000
    

int main() {

    void QuickSort (int * V, int Inf, int Sup);
    int Vetor[] = {3, 6, 5, 1, 7, 2};
    int Tamanho = sizeof(Vetor) / sizeof(int);
    QuickSort(Vetor, 0 , Tamanho - 1);
    ExibirVetor(Vetor, Tamanho);

}

void TrocarElemento(int * A, int * B){

// A e B são ponteiros (guardam endereços de memória)

int temp = *A; // temp recebe o valor apontado por A
*A = *B; // o valor apontado por passa a ser o valor apontado
*B = temp;// o valor apontado por B recebe temp (valor apontaodo)
// printf("%d \t %d \n", *A, *B); //valor apontado por
}

int Particao(int * V, int Inf, int Sup){
    int Pivot = V[(Inf + Sup) / 2];
    int i = Inf;
    int j = Sup;

    while(i <= j){
        while(V[i] < Pivot) i++;
        while(V[j] > Pivot) j++;
        if(i <= j) {
            TrocarElemento(&V[i], &V[j]);
            i++;
            j--;
        }
    }

/* for(int p = Inf; p < i; p++) printf("%d\t", V[p]);
    printf("\n[%d]\n", V[i]);
    for (int q = i + 1; q <= Sup; q++) printf("%d\t", V[q]);
*/ 
    return i;

}

void QuickSort (int * V, int Inf, int Sup){
    if(Inf < Sup) {
        int P = Particao(V, Inf, Sup);
        QuickSort(V, Inf, P -1);
        QuickSort(V, P, Sup);
    }
}

void ExibirVetor(int * V, int N) {
    for (int i = 0; i < N; i++) printf("%d\t", V[i]);
    printf("\n");
}