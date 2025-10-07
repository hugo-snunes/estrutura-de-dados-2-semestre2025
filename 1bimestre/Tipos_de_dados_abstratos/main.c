#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "fracao.h"

int main(){

system("cls");

Fracao F1 = criarFracao(24,30);
F1 = simplificarFracao(F1);
exibirFracao(F1); // Será exibido 4/5

Fracao F2 = criarFracao(-30, 40);
F2 = simplificarFracao(F2); 
exibirFracao(F2); // Será exibido -3/4

Fracao F3 = criarFracao(-30, 40);
F3 = simplificarFracao(F3); 
exibirFracao(F3); // Será exibido 37/42

Fracao F4 = criarFracao(5, 6);
Fracao F5 = criarFracao(4, 9);
Fracao F6 = somarFracoes(F4, F5);
exibirFracao(F6);

Fracao F7 = subtrairFracoes(F4, F5);
exibirFracao(F7);

// exercício 3/4 - 7/9 + 5/12

Fracao F8 = criarFracao(3, 4);
Fracao F9 = criarFracao(7, 9);
Fracao F10 = criarFracao(5,12);

Fracao temp;
temp = subtrairFracoes(F8, F9);
temp = somarFracoes(temp, F10);
exibirFracao(temp);

return 0;

}