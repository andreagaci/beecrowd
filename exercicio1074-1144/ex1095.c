//Header

#include <stdio.h>

//Code

int main(){

    int j, i, q;

    i = 1;
    j = 60;

    while (j >= 0)
    {
        printf("I=%d J=%d\n", i, j);
        i = i + 3;
        j = j - 5;
    }

    return 0;
}