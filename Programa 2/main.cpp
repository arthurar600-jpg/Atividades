#include <iostream>
#include "quimica.h"

int main(void)
{
    elemento z;
    std::string nome;

    std::cout << "Defina o nome de um elemento quimico: ";
    std::cin >> nome;
    z.D_nome(nome);

    imprime(z);
return 0;
}