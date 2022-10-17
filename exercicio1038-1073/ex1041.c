//Header

#include <stdio.h>

//Code

int main(){

    double x, y, q1, q2, q3, q4;

    scanf("%lf %lf", &x, &y);

    if (x > 0 && y > 0)
    {
        printf("Q1\n");
    }
    else if (x > 0 && y < 0)
    {
        printf("Q4\n");
    }
     else if (x == 0 && y == 0)
    {
        printf("Origem\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("Q2\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("Q3\n");
    }
    else if (x == 0 && y > 0 ||x == 0 && y < 0 )
    {
        printf("Eixo Y\n");
    }
    else{ 
    printf("Eixo X\n");
    }

    return 0;
}