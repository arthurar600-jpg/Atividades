#include <iostream>
#include <string>
#include "aluno.h"

void ler_nome(aluno &x)
{
    std::cout << "Digite o nome do anluno: ";
    std::getline(std::cin,x.nome);
}
void ler_curso(aluno &x)
{
    std::cout << "Digite o curso do anluno: ";
    std::getline(std::cin, x.curso);
}
void ler_idade(aluno &x)
{
    std::cout << "Digite a idade do aluno: ";
    std::cin >> x.idade;
}
void ficha(aluno x)
{
    std::cout << "Nome: " << x.nome <<  "\nCurso: " << x.curso << "\nIdade: " << x.idade;
}
void ler_aluno(aluno &x)
{
    ler_nome(x);
    ler_curso(x);
    ler_idade(x);
}