#include <stdio.h>
#include "funcionario.h"

int main(void)
{
    funcionario carlos = {"Carlos", 551313, 160, 20, 2, 16.80, 0, 0};

    calculaSalario(&carlos);
    imprime(carlos);
return 0;
}