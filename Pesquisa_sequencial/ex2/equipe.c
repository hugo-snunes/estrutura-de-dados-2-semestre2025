// Implementar todas as funções do TAD equipe

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "equipe.h"
// Recebe NomeArquivo como parâmetro e retorna vetor de Equipes

Time * LerDados(char * NomeArquivo) {

    FILE * fp = fopen(NomeArquivo, "r");
    if(fp == NULL) {
        printf("ERRO: o arquivo não pode ser aberto");
        exit(ERRO);
    }
    
    char buffer[200];
    fscanf(fp, "%s", buffer);

    Time * X = malloc(20 * sizeof(Time));
    int i = 0;

    while (fscanf(fp,
        "%d;%[^;];%[^;];%d;%d;%d;%d;%d;%d;%d;%d\n",
         &X[i].Pos, // Lendo a posição da equipe (1ª coluna)
         X[i].Estado,   // Lendo estado (incluindo espaços em nomes compostos)
         X[i].Equipe,&X[i].Pts,&X[i].J,&X[i].V,&X[i].E,&X[i].D,&X[i].GP,&X[i].GC,&X[i].SG
         ) == 11) {
                X[i].Aproveitamento = 100 * (float) X[i].Pts / (float) (3 * X[i].J);                
                i++;
    }

fclose(fp);
return X;

}

void InsertionSort(int * V, int N){

    Time Chave; // Elemento que será inserido na parte ordenada
    int i; // Posição (ou coordenada) do elemento chave
    int j; //Posição de elemento da "parte ordenada" que será comparada com chave

    for(i = 1; i < N; i++) {

        Chave = V[i];
        j = i - 1;

        

        while (j >= 0 && strcmp([j].Nome, Chave.Nome) > 0) {
            V[j + 1] = V[j];
            j--;
        }

        V[j + 1] = Chave; // Copiando no último lugar modificado
    }

}

int getPontos(Time * T, int Pos){
    int i;

    for (i = 0; i < 20; i++)
        if(T[i].Pos == Pos)
            return T[i].Pts;

    return ERRO;
}
float getAproveitamento (Time * T, char * Nome){
    int i;

    for(i = 0; i < 20; i++)
        if(strcmp(T[i].Equipe, Nome) == 0)
}