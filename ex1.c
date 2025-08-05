#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char Nome[150]; // Gasta + 1 ("\0") = 151 caracteres
    char Telefone[14]; // 15 caracteres
    char Endereco[200]; // 201 caracteres
} Pessoa;

typedef int inteiro;

int main(int argc, char* argv[]){

    Pessoa X;
    inteiro n;
    strcpy(X.Nome, "Maria Alves");
    strcpy(X.Telefone, "(61) 12345-6789");
    strcpy(X.Endereco, "SHIS 12 23 13");

    printf("%s\t%s\t%s\n", X.Nome, X.Endereco, X.Telefone);

    return 0;
} 