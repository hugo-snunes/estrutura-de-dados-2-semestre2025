#include <stdio.h>
#include <stdlib.h>

#include "pilha.h"

int main() {

    Item * I1 = CriarItem(30);
    Item * I2 = CriarItem(26);
    Item * I3 = CriarItem(12);
    Item * I4 = CriarItem(9);
    Item * I5 = CriarItem(5);
    Item * I6 = CriarItem(10);
    Item * I7 = CriarItem(27);

    Pilha * MinhaPilha = CriarPilha();

    printf("Endereco da pilha: %X", MinhaPilha);
}