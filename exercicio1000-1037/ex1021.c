//Header

#include <stdio.h>

//Code

int main(){

    double notas;
    double moedas;
    int notas2;

    scanf("%lf", &notas);

    notas2 = notas * 100;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notas2/10000);
    notas2 = notas2 % 10000;
    printf("%d nota(s) de R$ 50.00\n", notas2/5000);
    notas2 = notas2 % 5000;
    printf("%d nota(s) de R$ 20.00\n", notas2/2000);
    notas2 = notas2 % 2000;
    printf("%d nota(s) de R$ 10.00\n", notas2/1000);
    notas2 = notas2 % 1000;
    printf("%d nota(s) de R$ 5.00\n", notas2/500);
    notas2 = notas2 % 500;
    printf("%d nota(s) de R$ 2.00\n", notas2/200);
    notas2 = notas2 % 200;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", notas2/100 );
    notas2 = notas2 % 100;
    printf("%d moeda(s) de R$ 0.50\n", notas2/50);
    notas2 = notas2 % 50;
    printf("%d moeda(s) de R$ 0.25\n", notas2/25);
    notas2 = notas2 % 25;
    printf("%d moeda(s) de R$ 0.10\n", notas2/10);
    notas2 = notas2 % 10;
    printf("%d moeda(s) de R$ 0.05\n", notas2/5);
    notas2 = notas2 % 5;
    printf("%d moeda(s) de R$ 0.01\n", notas2);
     
    return 0;
}
