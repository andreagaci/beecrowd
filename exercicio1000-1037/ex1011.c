//Cabeçario

#include <stdio.h>

//Código

int main(){
    int raio;
    double pi = 3.14159;
    double volume, raiosobre2, raiosobre3;
    
    scanf("%d", &raio );

    raiosobre2 = raio * raio;
    raiosobre3 = raiosobre2 * raio;

    volume = (4.0/3) * pi * raiosobre3;

    printf("VOLUME = %0.3lf\n", volume);

    return 0;
}