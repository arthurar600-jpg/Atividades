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

    double D_temp0(double x)
    {
        temp0 = x;
    }

    double D_tempD(double x)
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
};

#endif