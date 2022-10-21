//Header

#include <stdio.h>

//Code

int main(){

    int resp, alcool, gasolina, diesel;
    resp = 1;
    alcool = 0;
    gasolina = 0;
    diesel = 0;
    


    while (1){
        scanf("%d", &resp);
        if (resp == 1){
            alcool = alcool + 1;
        }
        else if (resp == 2){
            gasolina = gasolina + 1;
        }
        else if (resp == 3){
            diesel = diesel + 1;
        }
        else if(resp == 4){
            printf("MUITO OBRIGADO\n");
            printf("Alcool: %d\n", alcool);
            printf("Gasolina: %d\n", gasolina);
            printf("Diesel: %d\n", diesel);
            break;
        } 
        else{
            continue;
        }
    }


    return 0;
}