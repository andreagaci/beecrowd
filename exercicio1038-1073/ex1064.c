//Header

#include <stdio.h>

//Code

int main(){

    double num, media;
    int i, q;
    i=1;
    q=0;
    media=0;

    while (i <= 6)
    {
        scanf("%lf", &num);
        if (num >= 0.0)
        {
            q = q + 1;
            media = media + num;
        }
        ++i;
    }
    
    media = media / q;

    printf("%d valores positivos\n", q);
    printf("%0.1lf\n", media);

    return 0;
}