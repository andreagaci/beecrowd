//Header

#include <stdio.h>
#include <math.h>

//Code

int maiorAB(int A,int B,int C){
    int maxab, max;
    maxab =(A + B + abs(A - B)) /2;
    max = (maxab + C + abs(maxab - C)) / 2;

    return max;
}

int main(){
    int A, B ,C;

    scanf("%d %d %d", &A, &B, &C);

    printf("%d eh o maior\n", maiorAB(A, B , C));
    
    return 0;
}