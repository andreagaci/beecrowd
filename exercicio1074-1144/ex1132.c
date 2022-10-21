//Header

#include <stdio.h>

//Code

int main(){
    int x, y, i, aux, soma;
    soma = 0;

    scanf("%d %d", &x, &y);

    //x == maior
    //y == menor

    if (y > x){
        aux = x;
        x = y;
        y = aux;
    }

    for(i = y; i <= x; i++){
        if (i % 13 > 0){
            soma = soma + i;
        }
    }
    
    printf("%d\n", soma);

    return 0;
}
