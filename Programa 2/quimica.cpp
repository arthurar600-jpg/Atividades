#include "quimica.h"

void def_E(elemento& x)
    {
        std::string str;
        int a;
        double f;
        bool b;

        std::cout << "Nome: ";
        std::getline(std::cin, str);
            x.D_nome(str);
        std::cout << "Código: ";
        std::getline(std::cin >> std::ws, str);
            x.D_cod(str);
        std::cout << "Quantida de medições: ";
        std::cin >> a;
            x.D_quant(a);
        std::cout << "Temperatura inicial: ";
        std::cin >> f;
            x.D_temp0(f);
        std::cout << "Variação da temperatura: ";
        std::cin >> f;
            x.D_tempD(f);

        x.calT();
        x.carac();
        x.medirT();
    }