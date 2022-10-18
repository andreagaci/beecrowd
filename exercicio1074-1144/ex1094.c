//Header

#include <stdio.h>

//Code

int main(){

    char letra;
    int n, i, q, total, porcentagem;
    total = 0;
    double coelho, ratos, sapos;
    coelho = 0;
    ratos = 0;
    sapos = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++){
        scanf("%d %c", &q, &letra);

        if (letra == 'C'){
            coelho = coelho + q;
        }
        if (letra == 'R'){
            ratos = ratos + q;
        }
        if (letra == 'S'){
            sapos = sapos + q;
        }
        total = total + q;
    }
    
        printf("Total: %d cobaias\n", total);
        printf("Total de coelhos: %0.0lf\n", coelho);
        printf("Total de ratos: %0.0lf\n", ratos);
        printf("Total de sapos: %0.0lf\n", sapos);
        printf("Percentual de coelhos: %0.2lf %%\n", (coelho * 100) / total);
        printf("Percentual de ratos: %0.2lf %%\n", (ratos * 100) / total);
        printf("Percentual de sapos: %0.2lf %%\n", (sapos * 100) / total);

    return 0;
}