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
            printf("%d^%d = %d", i,i, i*i);
        }
        i = i + 1;
    }
    
    printf("%d valores positivos\n", q);

    return 0;
}