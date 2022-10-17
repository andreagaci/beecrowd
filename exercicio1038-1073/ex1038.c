//Header

#include <stdio.h>

//Code

int main(){

    int produto, quantidade;
    double lanche;

    scanf("%d %d", &produto, &quantidade);

    switch(produto){
    case 1: lanche = 4.00; break;
    case 2: lanche = 4.50; break;
    case 3: lanche = 5.00; break;
    case 4: lanche = 2.00; break;
    case 5: lanche = 1.50; break;
    }

    lanche = lanche * quantidade;

    printf("Total: R$ %0.2lf\n", lanche);

    return 0;
}