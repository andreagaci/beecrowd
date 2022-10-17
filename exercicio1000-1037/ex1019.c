//Header

#include <stdio.h>

//Code

int main(){

    int N, horas1, horas2, minutos1, minutos2, segundos;

    scanf("%d", &N);
    
    horas1 = N/60;
    horas2 = horas1 / 60; 
    minutos1 = N - (horas2 * 60 * 60);
    minutos2 = minutos1 / 60;
    segundos = minutos1 % 60;
    
    printf("%d:%d:%d\n", horas2, minutos2, segundos);
    
    return 0;
}