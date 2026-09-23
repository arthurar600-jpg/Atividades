#include <iostream>
#include <string>
#include "quimica.h"

void imprime(elemento x)
{
    std::cout << "Nome: " x.nome << "\nCódigo: " << x.cod << "\nNº de Medições: ";
    std::cout << x.quant << "\nTemperatura F: " << x.tempF << "\n Nº de caracteres do código: ";
    std::cout << x.q_char;
    if(x.b)
    {
        std::cout << "Temperatura exedeu o limite.";
    } else
    {
        std::cout << "Temperatura está dentro do limite.";
    }
}