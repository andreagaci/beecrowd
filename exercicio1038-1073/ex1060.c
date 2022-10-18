//Header

#include <stdio.h>

//Code

int main(){

    double num;
    int i, q;
    i=1;
    q=0;

    while (i <= 6)
    {
        scanf("%lf", &num);
        if (num >= 0.0)
        {
            q = q + 1;
        }
        ++i;
    }
    
    printf("%d valores positivos\n", q);

    return 0;
}