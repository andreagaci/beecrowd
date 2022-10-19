//Header

#include <stdio.h>

//Code

int main(){

    int m, n, i, soma;
    soma = 0;

    scanf("%d %d", &m, &n);
    while (m > 0 && n > 0){
        if (m > n && n > 0){
            for(i = n; m >= i; i++){
                printf("%d ", i);
                soma = soma + i;
            }    
            printf("Sum=%d", soma);
            printf("\n");
            soma = 0;
        }
        else{
            for(i = m; n >= i; i++){
                printf("%d ", i);
                soma = soma + i;
            }
            printf("Sum=%d", soma);
            printf("\n");
            soma = 0;
        }
        scanf("%d %d", &m, &n);
    }

    return 0;
}