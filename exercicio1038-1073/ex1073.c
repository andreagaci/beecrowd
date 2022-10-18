//Header

#include <stdio.h>

//Code

int main(){

    int i, q, num;
    i=1;
    q=0;

    scanf("%d", &num);

    while (i <= num){
        if (i % 2 == 0)
        {
            printf("%d^2 = %d\n", i, i*i);
        }
        i = i + 1;
    }

    return 0;
}