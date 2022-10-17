//Header

#include <stdio.h>

//Code

int main(){
    int codigo1, codigo2, num_peca1, num_peca2;
    double valor1, valor2, preco, resultado;

    scanf("%d %d %lf", &codigo1, &num_peca1, &valor1);
    scanf("%d %d %lf", &codigo2, &num_peca2, &valor2);

    preco = num_peca1 * valor1 + num_peca2 * valor2;

    printf("VALOR A PAGAR: R$ %0.2lf\n", preco);


    return 0;

}