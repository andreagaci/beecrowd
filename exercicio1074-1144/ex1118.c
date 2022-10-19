//Header

#include <stdio.h>

//Code
int invalido (double x){
    if (x < 0 || x > 10) return 1 && printf("nota invalida\n");
}

int main(){

    int resp = 1;
    double n;
    double nota1, nota2;

    while(resp == 1){
        while ((scanf("%lf", &n))){
            if (invalido(n) == 1){
            }
            else{
                nota1 = n;
                break;
            }
        }
        while ((scanf("%lf", &n))){
            if (invalido(n) == 1){
            }
            else{
                nota2 = n;
                printf("media = %0.2lf\n", (nota1 + nota2) / 2);   
                break;
            }
        }
        while (1){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &resp);
            if(resp==1 || resp==2)break;
        }
        if(resp==1)continue;
        else break;
        
    }
} 

/*if(resp == 1){

        }
        else if(resp == 2){
            break;
        }
        else{ 
        while(resp != 1 && resp != 2){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &resp);
        }  
        }*/