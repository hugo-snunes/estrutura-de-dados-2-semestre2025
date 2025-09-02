#ifndef EQUIPE_H
#define EQUIPE_H

// Definindo TAD Equipe

#define ERRO -999

typedef struct {
    int Pos; // Posição final da equipe no CB2024
    char Estado[40];
    char Equipe[50];
    int Pts;
    int J;
    int V;
    int E;
    int D;
    int GP; // Gols Pró
    int GC; // Gols Contra
    int SG; // Saldo de Gols SG = GP - GS
    float Aproveitamento; // % de pontos conquistados
} Time;

Time * LerDados(char * NomeArquivo); //retornar vetor da equipe

int getPontos(Time * T, int Pos);

float getAproveitamento(Time * T, char * Nome);

#endif

