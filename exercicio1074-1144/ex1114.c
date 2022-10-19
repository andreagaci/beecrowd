//Header

#include <stdio.h>

//Code

int senha (int x){
    if(x == 2002) return 1;
    else return 0;
}

int main(){

    int n;

    while( scanf("%d", &n)){
        if (senha(n) == 1){
            printf("Acesso Permitido\n");
            break;
        }
        else{
            printf("Senha Invalida\n");
        } 
    }
}

