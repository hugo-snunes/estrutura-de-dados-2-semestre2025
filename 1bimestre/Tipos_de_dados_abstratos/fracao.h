#ifndef FRACAO_H
#define FRACAO_H

// Definição do TAD Fração

typedef struct{
    int Numerador;
    int Denominador;
} Fracao;

// Protótipo das Funções

int calcularMDC (int A, int B);
Fracao simplificarFracao(Fracao F);
Fracao criarFracao(int N, int D);
void exibirFracao(Fracao F);
Fracao somarFracoes(Fracao F, Fracao G);
Fracao subtrairFracoes(Fracao F, Fracao G);

#endif

