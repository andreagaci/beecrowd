//Header

#include <stdio.h>

//Code

int main(){

    double a, b ,c, a_maior, b_meio, c_menor;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a > b & a > c & b > c){
        a_maior = a;
        b_meio = b;
        c_menor = c;
    }
    else if (b > a & b > c & a > c){
        a_maior = b;
        b_meio = a;
        c_menor = c;
    }
    else if (c > a & c > b & b > a){
        a_maior = c;
        b_meio = b;
        c_menor = a;
    }
    else if (c > a & c > b & a > b){
        a_maior = c;
        b_meio = a;
        c_menor = b;
    }
    else if (b > a & b > c & c > a){
       a_maior = b;
        b_meio = c;
        c_menor = a;
    }
    else if (a > b & a > c & c > b){
        a_maior = a;
        b_meio = c;
        c_menor = b;
    }
    else if (a == b && b == c){
        a_maior = a;
        b_meio = b;
        c_menor = c;
    }
     else if (a == b && b > c){
        a_maior = a;
        b_meio = b;
        c_menor = c;
    }
     else if (a == c && c > b){
        a_maior = a;
        b_meio = c;
        c_menor = b;
    }
     else if (b == c && c > a){
        a_maior = b;
        b_meio = c;
        c_menor = a;
    }
     else if (a == b && b < c){
        a_maior = c;
        b_meio = b;
        c_menor = a;
    }
     else if (a == c && c < b){
        a_maior = b;
        b_meio = c;
        c_menor = a;
    }
     else if (b == c && c < a){
        a_maior = a;
        b_meio = b;
        c_menor = c;
    }
    //Saber qual triangulo é:
    if (a_maior >= b_meio + c_menor ){
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if ((a_maior * a_maior) == (b_meio * b_meio) + (c_menor * c_menor)){
        printf("TRIANGULO RETANGULO\n");
        }
        if ((a_maior * a_maior) > (b_meio * b_meio) + (c_menor * c_menor)){
        printf("TRIANGULO OBTUSANGULO\n");
        }
        if ((a_maior * a_maior) < (b_meio * b_meio) + (c_menor * c_menor)){
        printf("TRIANGULO ACUTANGULO\n");
        }
        if (a_maior == b_meio && a_maior == c_menor){
        printf("TRIANGULO EQUILATERO\n");
        }
        if (a_maior == b_meio && a_maior != c_menor || a_maior == c_menor && a_maior != b_meio || b_meio == c_menor && b_meio != a_maior){
        printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}