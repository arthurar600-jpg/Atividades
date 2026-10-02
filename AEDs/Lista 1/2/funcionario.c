#include <stdio.h>
#include <string.h>
#include "funcionario.h"

void calculaSalario(funcionario* x)
{
    (*x).salarioL = 0;
    (*x).salarioE = 0;
    (*x).descontoINSS = 0;

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

    (*x).descontoINSS = ((*x).salarioN + (*x).salarioE) * INSS;

    (*x).salarioL = ((*x).salarioN + (*x).salarioE) - (*x).descontoINSS;
}

void imprime(funcionario x)
{
    printf("Nome: ");
    puts(x.nome);
    printf("N° de inscrição: %d \nSalario Horas: %.2f\n", x.inscricao, x.salarioN);
    printf("Horas extra: %.2f\n Dedução INSS: %.2f\nSalario Liquido: %.2f\n", x.salarioE, x.descontoINSS, x.salarioL);
}

void getFuncionario(funcionario* x)
{
    printf("Digite o nome do funcionário.\n");
        fgets((*x).nome, 50, stdin);
        (*x).nome[strlen((*x).nome)] = '\0';
        getchar();
    printf("Defina a incrição do funcionário.\n");
        scanf("%d", &((*x).inscricao));
    printf("Digite o nº de horas trabalhadas pelo funcionário.\n");
        scanf("%d", &((*x).horasN));
    printf("Digite o nº de horas extras do funcionário.\n");
        scanf("%d", &((*x).horasE));
    printf("Digite o sálario por hora do funcionário e a sua clase. (XX.XX, 1/2)");
        scanf("%f,%d", &((*x).salarioN), &((*x).classe));
}