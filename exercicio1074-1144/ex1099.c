//Header

#include <stdio.h>

//Code

int main(){

    int q, j, n, num1, num2;
    int soma = 0;

    scanf("%d", &n);

    for(q=1; q<=n; q++){
        scanf("%d %d", &num1, &num2);
        if (num1 > num2){
            for(j = num2 + 1; num1 > j; j++){
                if (j % 2 > 0){
                    soma = soma + j;
                }
            }
            printf("%d\n", soma);
            soma = 0;       
        }
        else if(num2 > num1){
            for(j = num1 + 1; num2 > j; j++){
                if (j % 2 > 0){
                    soma = soma + j;
                }
            }
            printf("%d\n", soma);
            soma = 0;
        }
        else{
            printf("0\n");
            soma = 0;
        }    
    }
  
    return 0;
}