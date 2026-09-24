#include <iostream>
#include <string>

class Contato
{
    private:
        std::string nome;
        std::string telefone;

    public:
        void definirNome(std::string str){
            nome = str;
        }
        void definirTelefone(std::string str){

            int a{0};

                for(int i = 0; i < str.size(); i++)
                {
                    if((str[i] >= '0' && str[i] <= '9')){
                        a++;
                    }
                }
            if(a != 11 || str.size() > 11){
                std::cout << "Telefone invalido" << std::endl;
            }else{
                telefone = str;
                std::cout << "Telefone atualizado." << std::endl;
            }

        }
        void obterNome(Contato x){
            std::cout << "Nome: " << x.nome << std::endl;
        }
        void obterTelefone(Contato x){
            std::cout << "Telefone: " << x.telefone << std::endl;
        }
};

int main(void)
{
    Contato x;
    Contato y;

    x.definirNome("Arthur");
    x.definirTelefone("31663795106");

    y.definirNome("Robin");
    y.definirTelefone("31663795106ABCD");

    x.obterNome(x);
    x.obterTelefone(x);
    y.obterNome(y);
    y.obterTelefone(y);

return 0;
}