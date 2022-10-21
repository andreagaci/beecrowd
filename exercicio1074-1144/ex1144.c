//Header

#include <stdio.h>

//Code

int main(){

    int n, i, j;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("%d %d %d\n", i, i*i ,i*i*i);
        printf("%d %d %d\n", i, i + 1 ,i + 2);
    }

    return 0;
}