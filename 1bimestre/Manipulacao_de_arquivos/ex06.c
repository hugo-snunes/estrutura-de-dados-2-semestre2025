#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    FILE * fp; // fp é um ponteiro para arquivo
    fp = fopen("lista.txt", "r"); // leitura

    if(fp == NULL) {
        printf("ERRO: arquivo não foi aberto!\n");
        exit(1);
    }

    int quan;
    char item[50];
    int uni;
    float valor;
    float valor_uni = uni * valor;
    float total = total + valor_uni;

    while (fscanf(fp, "%s\t%d\t%.2f\n", item, &uni, &valor) == 3)
    {
        printf("%s:\t%d * %.2f = %.2f\n", item, uni, valor, valor_uni);  
    }

    fclose(fp);

    return 0;
}