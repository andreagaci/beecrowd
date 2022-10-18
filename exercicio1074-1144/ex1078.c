//Header

#include <stdio.h>

//Code

int main(){

    int n, i;
    i = 1;

    scanf("%d", &n);

    while (i <= 10)
    {
        printf("%d x %d = %d", i, n, i*n);
        i = i + 1;
    }
    
    return 0;
}