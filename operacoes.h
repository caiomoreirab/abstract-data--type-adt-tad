
// Arquivo operacoes.h 


#ifndef OPERACOES_H   // Verifica se OPERACOES_H ainda não foi definido.
#define OPERACOES_H   // Define OPERACOES_H para evitar múltiplas inclusões





typedef struct operacoes
{
    int num1;
    int num2;
    int num3;

} Operacoes ;



// Declaração da função para somar os números da struct.
int operacao_soma(Operacoes *op);



#endif // Fecha a proteção.
