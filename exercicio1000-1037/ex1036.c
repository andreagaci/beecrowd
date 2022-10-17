//Header

#include <stdio.h>
#include <math.h>

//Código

int main(){

    double a, b , c, delta, raiz1, raiz2;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (((b * b) - 4 * a * c < 0) || (a == 0)){
        printf("Impossivel calcular\n");
    }
    else{
        delta = (b*b) - (4*a*c);
        delta = sqrt(delta);

        raiz1 = (-(b) + delta) / (2 * a);
        raiz2 = (-(b) - delta) / (2 * a);

        printf("R1 = %0.5lf\n", raiz1);
        printf("R2 = %0.5lf\n", raiz2);
    }

    return 0;
}