//Header

#include <stdio.h>

//Code

int main(){

    int data;
    
    scanf("%d", &data);
    
    printf("%d ano(s)\n", data / 365);
    data = data % 365;
    printf("%d mes(es)\n", data / 30);
    data = data % 30;
    printf("%d dia(s)\n", data);

    return 0;
}