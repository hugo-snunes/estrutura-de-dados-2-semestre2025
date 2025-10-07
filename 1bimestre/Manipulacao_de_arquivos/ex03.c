#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    FILE * fp; // fp é um ponteiro para arquivo
    fp = fopen("teste.txt", "a"); // abre teste.txt para escrita

    if(fp == NULL) {
        printf("ERRO: arquivo não foi aberto!\n");
        exit(1);
    }

    fprintf(fp, "amor proprio\n");

    printf("Arquivo aberto/criado!\n");


    fclose(fp);

    return 0;
}