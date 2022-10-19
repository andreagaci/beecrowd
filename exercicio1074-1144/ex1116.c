//Header

#include <stdio.h>

//Code

int main(){

    int n, i;
    double num1, num2;
    double soma = 0;

    scanf("%d", &n);

    for(i = 0; n > i; i++){
        scanf("%lf %lf", &num1, &num2);
        (double)soma == num1 / num2;
        printf("%0.1lf", soma);
    }

    return 0;
}