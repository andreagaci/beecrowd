//Header

#include <stdio.h>

//Code

int main(){
    char nome;
    double salario_fixo, vendas, comissao, resultado;

    scanf("%s %lf %lf", &nome, &salario_fixo, &vendas);
    
    comissao = (vendas * 15) /100;
    resultado = comissao + salario_fixo;

    printf("TOTAL = R$ %0.2lf\n", resultado);

    return 0;
}