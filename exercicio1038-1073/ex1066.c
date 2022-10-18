//Header

#include <stdio.h>

//Code

int main(){

    int num;
    int i, q, q2, q3, q4;
    i=1;
    q=0;
    q2=0;
    q3=0;
    q4=0;

    while (i <= 5)
    {
        scanf("%d", &num);
        if (num % 2 == 0){
            q = q + 1;
        }
        else{
            q2 = q2 + 1;
        }
        if (num > 0.0){
            q3 = q3 + 1;
        }
        else if (num < 0)
        {
            q4 = q4 + 1;
        }
        ++i;
    }
    
    printf("%d valor(es) par(es)\n", q);
    printf("%d valor(es) impar(es)\n", q2);
    printf("%d valor(es) positivo(s)\n", q3);
    printf("%d valor(es) negativo(s)\n", q4);

    return 0;
}