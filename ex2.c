#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Definição do TAD Fração

typedef struct{
    int Numerador;
    int Denominador;
} Fracao;

Fracao criarFracao(int N, int D) {
    Fracao F;
    F.Numerador = N;
    F.Denominador = D;
    return F;
}




int main() {

    Fracao F1 = criarFracao(7, 2);
    printf("O valoe de F1 é %.2f.\n", (float)F1.Numerador/F1.Denominador);

    return 0;

}