

// Arquivo operacoes.c



#include <stdio.h>
#include "operacoes.h"   // Inclui o cabeçalho correspondente.


int operacao_soma(Operacoes *op) {
    printf("Digite o primeiro número a ser somado: ");
    scanf("%d", &op->num1);  // Significa "acessar o campo num1 da struct apontada por op".
    printf("Digite o segundo número a ser somado: ");
    scanf("%d", &op->num2);
    printf("Digite o terceiro número a ser somado: ");
    scanf("%d", &op->num1);

    int soma = op->num1 + op->num2 + op->num1;
    return soma;

}


