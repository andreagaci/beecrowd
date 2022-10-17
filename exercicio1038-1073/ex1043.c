//Header

#include <stdio.h>

//Code

int main (){

    double a, b , c, soma1, soma2, soma3;

    scanf("%lf %lf %lf", &a, &b, &c);

    soma1 = a + b;
    soma2 = b + c;
    soma3 = c + a;

    if (soma1 > c && soma2 > a && soma3 > b)
    {
        printf("Perimetro = %0.1lf\n", a + b + c);
    }
    else
    {
        printf("Area = %0.1lf\n", ((a + b) * c) / 2);
    }

    return 0;
}