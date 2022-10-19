//Header

#include <stdio.h>

//Code
int invalido (double x){
    if (x < 0 || x > 10) return 1 && printf("nota invalida\n");
}

int main(){

    double n;
    double nota1, nota2;

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
            break;
        }
    }

    printf("media = %0.2lf)", (nota1 + nota2) / 2);

} 