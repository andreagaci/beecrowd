//Header

#include <stdio.h>

//Code

int main(){

    int num;
    num = 1;

    while (num < 101){
        if (num % 2 == 0){
            printf("%\n", num);
        }
        ++num;   
    }
    return 0;

}