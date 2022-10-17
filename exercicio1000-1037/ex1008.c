//Header

#include <stdio.h>

//Code

int main(){
    int num_funcionario, num_horas;
    double valor_hora, salario;

    scanf("%d %d %lf", &num_funcionario, &num_horas, &valor_hora);

    salario = num_horas * valor_hora;

    printf("NUMBER = %d\n", num_funcionario);
    printf("SALARY = U$ %0.2lf\n", salario);

    return 0;
}