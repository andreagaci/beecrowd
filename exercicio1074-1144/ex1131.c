//Header

#include <stdio.h>

//Code

int main(){

    int inter, gremio, resp, soma_gremio, soma_inter, empate, grenais, vitgremio, vitinter;
    grenais = 0;
    soma_gremio = 0;
    soma_inter = 0;
    empate = 0;
    vitgremio = 0;
    vitinter = 0;
    resp = 1;

    while (resp == 1){
        scanf("%d %d", &inter, &gremio);
        grenais = grenais + 1;
        if (inter > gremio){
            vitinter = vitinter + 1;
        }
        else if (gremio > inter){
            vitgremio = vitgremio + 1;
        }
        else{
            empate = empate + 1;
        }
        soma_gremio = soma_gremio + gremio;
        soma_inter = soma_inter + inter;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &resp);   
        if (resp == 2){
            printf("%d grenais\n", grenais);
            printf("Inter:%d\n", vitinter);
            printf("Gremio:%d\n", vitgremio);
            printf("Empates:%d\n", empate);
            if (vitgremio > vitinter){
                printf("Gremio venceu mais\n");
            }
            else if (vitinter > vitgremio){
                printf("Inter venceu mais\n");
            }
            else{
                printf("Nao houve vencedor\n");
            }
            break;
        }
        else if(resp == 1){
            continue;
        }
    }
    
    return 0;
}