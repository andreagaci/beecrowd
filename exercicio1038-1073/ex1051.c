//Header

#include <stdio.h>

//Code

int main(){

    double renda, renda8, renda18, renda28;

    scanf("%lf", &renda);

    if (renda <= 2000.00){
        printf("Isento\n");
    }
    else if (renda > 2000.00 && renda <= 3000.00){
        renda = renda - 2000;
        renda = (renda * 8) / 100;
        printf("R$ %0.2lf\n", renda);
    }
    else if (renda >= 3000.01 && renda <= 4500.00){//3500
        renda = renda - 3000; //500
        renda8 = 80;
        renda18 = (renda * 18) / 100; 
        renda = renda8 + renda18;
        printf("R$ %0.2lf\n", renda);
    }
    else if (renda >= 4500){//5000
        renda = renda - 4500; //500
        renda8 = 80;
        renda18 = 270;
        renda28 = (renda * 28) / 100;
        renda = renda8 + renda18 + renda28;
        printf("R$ %0.2lf\n", renda);
    }

    return 0;
}