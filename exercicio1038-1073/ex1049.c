//Header

#include <stdio.h>
#include <string.h>
#include <strings.h>

//Code

int main(){

    char n1[20], n2[20], n3[20];
    scanf("%s %s %s", &n1, &n2, &n3);

    if (n1[0] == 'v'){
        if (n2[0] == 'a'){
            if (n3[0] == 'c')printf("aguia\n");
            else printf("pomba\n");
        }else{
            if (n3[0] == 'o')printf("homem\n");
            else printf("vaca\n");
        }
    }else{
        if(n2[0] == 'i'){
            if(n3[2] == 'm')printf("pulga\n");
            else printf("lagarta\n");     
        }else{
            if(n3[0] == 'h')printf("sanguessuga\n");
            else printf("minhoca\n");
        }    
        }
    return 0;
}