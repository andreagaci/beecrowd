//Header

#include <stdio.h>

//Code

int main(){

    int num;
    int i, q;
    i=1;
    q=0;

    while (i <= 5)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            q = q + 1;
        }
        ++i;
    }
    
    printf("%d valores pares\n", q);

    return 0;
}