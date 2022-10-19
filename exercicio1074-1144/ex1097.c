//Header

#include <stdio.h>

//Code

int main(){

    int j=7, i, q;

    for(i=1; i<=9; i+=2){
        for(q=0; q<3; q++){
            printf("I=%d J=%d\n", i, j);
            j--;
        }
        j+=5;
    }    

    return 0;
}