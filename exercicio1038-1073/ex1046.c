//Header

#include <stdio.h>

//Code

int main(){

    int hora_inicio, hora_fim, hora;
    
    scanf("%d %d", &hora_inicio, &hora_fim);

    if (hora_fim > hora_inicio){
        hora = hora_fim - hora_inicio;
    }
    else if (hora_fim < hora_inicio){
        hora = (hora_fim - hora_inicio) + 24;
    }
    else if (hora_inicio == hora_fim){
        hora = 24;
    }
    
    printf("O JOGO DUROU %d HORA(S)\n", hora);
    
    return 0;
}