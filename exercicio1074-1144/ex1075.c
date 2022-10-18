//Header

#include <stdio.h>

//Code

int main(){

    int n, i;
    i = 1;

    scanf("%d", &n);

    while (i < 10000)
    {
        if (i % n == 2)
        {
            printf("%d\n", i);
        } 
        i = i + 1;
    }

    return 0;
}