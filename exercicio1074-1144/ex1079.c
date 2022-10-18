//Header

#include <stdio.h>

//Code

int main(){


    double q, q2, q3, soma;
    int n, i;
    i = 1;
    soma = 0;

    scanf("%d", &n);

    while (i <= n){
        scanf("%lf", &q);
        soma = (q*2) + soma;
        scanf("%lf", &q2);
        soma = (q2*3) + soma;
        scanf("%lf", &q3);
        soma = (q3*5) + soma;
        printf("%0.1lf\n", soma/10);
        soma = 0;
        i = i + 1;
    }
    


    return 0;
}