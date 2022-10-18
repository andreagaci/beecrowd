//Header

#include <stdio.h>

//Code

int main(){

    int n, i, maior, pos;
    i = 1;
    maior = 0;
    pos = 0;

    while (i <= 100)
    {
        scanf("%d", &n);

        if (n > maior){
            maior = n;
            pos = i;
        }
        i = i + 1;
    }
    
    printf("%d\n", maior);
    printf("%d\n", pos);


    return 0;
}