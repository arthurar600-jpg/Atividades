#include <iostream>
#include <cstdlib>
#include "aluno.h"

int main(void)
{
    aluno* y;
    int i{0}, tam{2};
    char escolha{'S'};
    y = (aluno*)malloc(tam * sizeof(aluno));

    do
    {
        ler_aluno(y[i]);
        std::cout << "Deseja continuar registrando alunos? (S/N)\n";
        std::cin >> escolha >> std::ws;

        if(i == tam)
        {
            std::cout << "O |if| foi acionado\n";
            tam += 2;
            y = (aluno*)realloc(y, tam * sizeof(aluno));
        }
        i++;
    }while(escolha == 'S' || escolha == 's');
    
free(y);
return 0;
}