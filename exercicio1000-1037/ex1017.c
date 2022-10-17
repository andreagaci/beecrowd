//Header

#include <stdio.h>

//Code

int main(){

    double horas, velocidade, sum;

    scanf("%lf %lf", &horas, &velocidade);

    sum = (velocidade / 12) * horas;

    printf("%0.3lf\n", sum);

    return 0;
}