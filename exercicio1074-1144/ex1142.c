//Header

#include <stdio.h>

//Code

int main(){

    int n, i, j;
    i = 1;
    j = 1;

    scanf("%d", &n);

    while (i <= n){
        printf("%d %d %d PUM\n", j, j+1, j+2);
        j = j + 4;
        i = i + 1;
    }
    
    return 0;
}