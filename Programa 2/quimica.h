#ifndef quimica_h
#define quimica_h

#include <iostream>
#include <string>

class elemento
{
    private:
        std::string nome;
        std::string cod;
        int quant;
        int q_char;
        double temp0;
        double tempD; // D de delta
        double tempF;
        bool b;

    public:
        void D_nome(std::string x)
            {
                nome = x;
            }

        void D_cod(std::string x)
            {
                cod = x;
            }

        void D_quant(int x)
            {
                quant = x;
            }

        void D_temp0(double x)
            {
                temp0 = x;
            }

        void D_tempD(double x)
            {
                tempD = x;
            }

        void calT()
            {
                tempF = temp0 + (quant * tempD);
            }

        void carac()
            {
                q_char = nome.size();
            }

        void medirT()
            {
                b = (tempF > 85.0);
            }

        void imprime()
            {
                std::cout << "Nome: " << nome << "\nCódigo: " << cod << "\nNº de Medições: " << quant << std::endl;
                std::cout << "Temperatura F: " << tempF << "\n Nº de caracteres do nome: " << q_char << std::endl;
                if(b)
                {
                    std::cout << "Temperatura excedeu o limite.";
                } else
                {
                    std::cout << "Temperatura está dentro do limite.";
                }
            }
};

void def_E(elemento& x);

#endif
