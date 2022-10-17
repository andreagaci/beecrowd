//Header

#include <stdio.h>

//Code

int main(){

    int notas;

    scanf("%d", &notas);

    printf("%d\n", notas);
    printf("%d nota(s) de R$ 100,00\n", notas/100);
    notas = notas % 100;
    printf("%d nota(s) de R$ 50,00\n", notas/50);
    notas = notas % 50;
    printf("%d nota(s) de R$ 20,00\n", notas/20);
    notas = notas % 20;
    printf("%d nota(s) de R$ 10,00\n", notas/10);
    notas = notas % 10;
    printf("%d nota(s) de R$ 5,00\n", notas/5);
    notas = notas % 5;
    printf("%d nota(s) de R$ 2,00\n", notas/2);
    notas = notas % 2;
    printf("%d nota(s) de R$ 1,00\n", notas/1);
    
    return 0;
}