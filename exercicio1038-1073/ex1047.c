//Header

#include <stdio.h>

//Code

int main(){

    int s_h, s_m, e_h, e_m;
    scanf("%d %d %d %d", &s_h, &s_m, &e_h, &e_m);

    if(e_m < s_m){
        e_m += 60;
        e_h -=1;
        e_m -= s_m; 
        if (e_h<s_h){
            e_h +=24;
            e_h -= s_h;
        }
        else{
            e_h -=s_h;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", e_h,e_m);
    }
    else if (s_h == e_h && s_m == e_m)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n", e_h,e_m);
    }
    else if (e_m>s_m){
        e_m -= s_m;
        if(e_h<s_h){
            e_h += 24;
            e_h -= s_h;
        }
        else{
            e_h -= s_h;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", e_h,e_m);
    }

    return 0;
}