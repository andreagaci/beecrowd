//Header

#include <stdio.h>

//Code

int main(){

    int j, i, q;

    i = 1;
    j = 7;

    while (j >= 5 && i <= 9){
        printf("I=%d J=%d\n", i, j);
        j = j - 1;
        if (j < 5){
            i = i + 2;
            j = 7;
        }
        
    }

    return 0;
}