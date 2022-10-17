//Header

#include <stdio.h>
#include <math.h>

//Code

int main(){

    double x1, y1, x2, y2, distanciax, distancia_x2,distanciay, distancia_y2, raiz, soma;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    distanciax = (x2 - x1);
    distancia_x2 = distanciax * distanciax;
    distanciay = (y2 - y1);
    distancia_y2 = distanciay * distanciay;
    soma = distancia_x2 + distancia_y2;
    raiz = sqrt(soma);

    printf("%0.4lf\n", raiz);

    return 0;
}