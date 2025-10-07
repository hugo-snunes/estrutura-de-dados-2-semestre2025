#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    FILE * fp; // fp é um ponteiro para arquivo
    fp = fopen("abc/teste.txt", "w"); // abre teste.txt para escrita

    if(fp == NULL) {
        printf("ERRO: arquivo não foi aberto!\n");
        exit(1);
    }

    printf("Arquivo aberto/criado!\n");


    fclose(fp);
    return 0;

}