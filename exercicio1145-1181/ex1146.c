//Header

#include <stdio.h>

//Code

int main(){

    int valor, i;

    scanf("%d", &valor);

    while (scanf("%d", valor)){
        for(i = 1; i <= valor; i++){
            printf("%d ", i);
        }
        printf("\n")
    }
    











    return 0;
}