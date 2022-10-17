//Header

#include <stdio.h>

//Code

int main(){

    int a, b;

    scanf("%d %d", &a, &b);

    if (a > b && a % b == 0){
        printf("Sao Multiplos\n");
    }
    else if (b > a && b % a == 0){
        printf("Sao Multiplos\n");
    }
    else{
        printf("Nao sao Multiplos\n");
    }

    return 0;
}