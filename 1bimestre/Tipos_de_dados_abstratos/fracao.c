#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "fracao.h"

Fracao criarFracao(int N, int D){
    Fracao F;
    F.Numerador = N;
    F.Denominador = D;
    return F;
}

void exibirFracao(Fracao F){
    printf("%d / %d\n", F.Numerador, F.Denominador);
}

int calcularMDC (int A, int B){

if (A < 0) A = -A;
if (B < 0) B = -B;

while(A % B != 0){
int temp = A;
A = B;
B = temp % B;

}

return(B);
}

Fracao simplificarFracao(Fracao F){
    int mdc = calcularMDC(F.Numerador, F.Denominador);
    F.Numerador = F.Numerador / mdc;
    F.Denominador = F.Denominador / mdc;
    return F;
}

Fracao somarFracoes(Fracao F, Fracao G){
    Fracao Resposta;
    Resposta.Denominador = F.Denominador * G.Denominador;
    Resposta.Numerador = (F.Numerador * G.Denominador) + (G.Numerador * F.Denominador);
    Resposta = simplificarFracao(Resposta);
    return Resposta;
}

Fracao subtrairFracoes(Fracao F, Fracao G){
     Fracao Resposta;
    Resposta.Denominador = F.Denominador * G.Denominador;
    Resposta.Numerador = (F.Numerador * G.Denominador) - (G.Numerador * F.Denominador);
    Resposta = simplificarFracao(Resposta);
    return Resposta;
}
