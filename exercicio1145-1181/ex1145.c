//Header

#include <stdio.h>

//Code

int main(){

    int x, y, i, q, soma;
    soma = 1;
    scanf("%d %d", &x, &y);

    for(i = 1; i <= y; i++){
        for(q = soma; q <= x; soma++){
            printf("%d", q);
        }
        printf("\n");
    }
    

    return 0;
}