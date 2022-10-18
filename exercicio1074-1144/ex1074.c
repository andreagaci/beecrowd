//Header

#include <stdio.h>

//Code

int main(){

    int n, x, i;

    i = 1;

    scanf("%d", &n);

    while (i <= n){
        scanf("%d", &x);
        if (x == 0){
            printf("NULL\n");
        }
        else if (x > 0 && x % 2 == 0)
        {
            printf("EVEN POSITIVE\n");
        }
        else if (x > 0 && x % 2 > 0){
            printf("ODD POSITIVE\n");
        }
        else if (x < 0 && x % 2 == 0)
        {
            printf("EVEN NEGATIVE\n");
        }
        else if (x < 0 && x % 2 != 0){
            printf("ODD NEGATIVE\n");
        }
        i = i + 1;
    }
    return 0;
}