#include <stdio.h>
#include "operacoes.h"

int main() {
    Operacoes op;
    int resultado = operacao_soma(&op); // Passa a struct por referência.

    printf("A soma dos números é: %d\n", resultado);

    return 0;
}
