//Header

#include <stdio.h>

//Code

int valor (int x, int y){
    if (x > 0 && y > 0) return 1 && printf("primeiro\n");
    else if (x < 0 && y > 0) return 1 && printf("segundo\n");
    else if (x < 0 && y < 0) return 1 && printf("terceiro\n");
    else if (x > 0 && y < 0) return 1 && printf("quarto\n");
    else return 0;
}

int main(){

    int x, y;

    while (scanf("%d %d", &x, &y)){
        if(valor(x, y) == 1){
        }
        else{
            break;
        }
    }
}