#ifndef aluno_h
#define aluno_h


typedef struct
{
    std::string nome;
    std::string curso;
    int idade;
}aluno;

void ler_aluno(aluno &x);
void ler_nome(aluno &x);
void ler_curso(aluno &x);
void ler_idade(aluno &x);
void ficha(aluno x);

#endif