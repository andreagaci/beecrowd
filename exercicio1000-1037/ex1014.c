//Header

#include <stdio.h>

//Code

int main(){

    int x;
    double y, consumo_total;

    scanf("%d", &x);
    scanf("%lf", &y);

    consumo_total = x / y;

    printf("%0.3lf km/l\n", consumo_total);

    return 0;
}