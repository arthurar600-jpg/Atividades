#include <stdio.h>
#include "funcionario.h"

void calculaSalario(funcionario* x)
{

    if((*x).classe == 1)
    {
        (*x).salarioN = (*x).salarioN * 1.3;
    } else
    if((*x).classe == 2)
    {
        (*x).salarioN = (*x).salarioN * 1.9;
    }
    else
    {
        printf("Classe indefinida.");
    }
    
    (*x).salarioE = (*x).salarioN + (*x).horasE * (*x).salarioN * 0.30;

    (*x).salarioN = (*x).salarioN * (*x).horasN;

    (*x).salarioL = ((*x).salarioN + (*x).salarioE) - ((*x).salarioN + (*x).salarioE) * INSS;
}
void imprime(funcionario x)
{
    printf("Nome: ");
    puts(x.nome);
    printf("N° de inscrição: %d \nSalario Horas: %.2f\nHoras extra: %.2f\n Dedução INSS: %.2f\nSalario Liquido: %.2f", x.inscricao, x.salarioN, x.salarioE, INSS, x.salarioL);
}