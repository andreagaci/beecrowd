//Header

#include <stdio.h>

//Code

int main(){

    int x, y, i, soma;
    soma = 0;

    scanf("%d %d", &x, &y);

    while (1){
        if (x == y){
        break;
        }
        if (x > y){
            printf("Decrescente\n");
        }
        else{
            printf("Crescente\n");
        }
        scanf("%d %d", &x, &y);
    }
    return 0;
}