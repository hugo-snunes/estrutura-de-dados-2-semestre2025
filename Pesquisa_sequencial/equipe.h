#ifndef EQUIPE_H
#define EQUIPE_H

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
    float Aproveitamento;
} Time;

#endif

