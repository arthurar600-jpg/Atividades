#ifndef Funcionario_h
#define Funcionario_h

#define INSS 0.11f

typedef struct Funcionario
{
    char nome[50];
    int inscricao, horasN, horasE, classe;
    float salarioN, salarioE, salarioL;
}funcionario;

void calculaSalario(funcionario* x);
void imprime(funcionario x);
#endif