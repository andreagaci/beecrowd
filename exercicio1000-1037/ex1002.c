//Header

#include <stdio.h>

//Code

int main(){

    double n = 3.14159;
    double area, raio;

    scanf("%lf", &raio);

    raio = raio * raio;

    raio = raio * n;

    printf("A=%0.4lf\n", raio);

    return 0;
}