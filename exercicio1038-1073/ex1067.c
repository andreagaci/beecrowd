//Header

#include <stdio.h>

//Code

int main(){

    int i, q, num;
    i=1;

    scanf("%d", &num);


    while (i <= num)
    {
        if (i % 2 > 0)
        {
            printf("%d\n", i);
        }
        ++i;
    }
    

    return 0;
}