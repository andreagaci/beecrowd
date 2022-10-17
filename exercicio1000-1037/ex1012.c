//Header

#include <stdio.h>

//Code

int main(){
    
    double a, b , c, area_trinagulo, area_circulo, raio, area_trapezio, area_quadrado, area_retangulo;
    double pi = 3.14159;

    scanf("%lf %lf %lf", &a, &b, &c);

    area_trinagulo = (a * c) / 2;
    area_circulo = pi * (c * c);
    area_trapezio = (a + b) * c / 2;
    area_quadrado = b * b;
    area_retangulo = a * b;

    printf("TRIANGULO: %0.3lf\n", area_trinagulo);
    printf("CIRCULO: %0.3lf\n", area_circulo);
    printf("TRAPEZIO: %0.3lf\n", area_trapezio);
    printf("QUADRADO: %0.3lf\n", area_quadrado);
    printf("RETANGULO: %0.3lf\n", area_retangulo);


    return 0;
}