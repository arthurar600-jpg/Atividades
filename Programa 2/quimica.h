#ifndef quimica_h
#define quimica_h

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
        q_char = size(nome);
    }

    void medirT()
    {
        b = (tempF > 85.0);
    }

    void imprime(elemento x)
    {
        std::cout << "Nome: " << x.nome << "\nCódigo: " << x.cod << "\nNº de Medições: ";
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
};

void def_E(elemento x);

#endif