//Header

#include <stdio.h>

//Code

int main(){

    double n1, n2, n3, n4, n5, media;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    
    media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;

    printf("Media: %0.1lf\n", media);

    if (media < 5)
    {
        printf("Aluno reprovado.\n");
    }
    else if (media >= 7)
    {
        printf("Aluno aprovado.\n");
    }
    else 
    {
        printf("Aluno em exame.\n");
        
        printf("Digite aqui a sua quinta nota: \n");
        scanf("%lf", &n5);
        
        printf("Nota do exame: %0.1lf\n", n5);
        
        media = (media + n5) / 2;
        
        if (media >= 5){
        printf("Aluno aprovado.\n");
        printf("Media final: %0.1lf\n", media);
        }
        else{
        printf("Aluno reprovado.\n");
        printf("Media final: %0.1lf\n", media);
        }
    }


    return 0;
}