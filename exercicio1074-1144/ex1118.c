//Header

#include <stdio.h>

//Code

int main(){

    double n, nota1, nota2;
    nota1 = 0;
    nota2 = 0;
    int resp;
    resp = 1;
    
    while(resp == 1){
        while (1){
            scanf("%lf", &n);
            if (n < 0 || n > 10){
                printf("nota invalida\n");
            }
            else{
                nota1 = n;
                break;
            }
        }
        while (1){
            scanf("%lf", &n);
            if (n < 0 || n > 10){
                printf("nota invalida\n");
            }
            else{
                nota2 = n;
                printf("media = %0.2lf\n", (nota1 + nota2) / 2);
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &resp);
                if(resp == 2){
                    break;
                }
                else if(resp == 1){
                    break;
                }
                else{
                    while(resp < 1 || resp > 2){
                        printf("novo calculo (1-sim 2-nao)\n");
                        scanf("%d", &resp);
                    }
                    break;
                }
            }
        }
    }
    return 0;
}

