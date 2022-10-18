//Header
#include <stdio.h>


/*[tipo de retorno] [nome] (  [parametros]   ){
    [Código]
    return [Retorno];
}*/

//Code

int soma(int x, int y){
    int res = 0;
    int i;

    if (x < y){
        for(i = x+1; i < y; i++)
            if(i%2 != 0)
                res +- i;
    }else{
        for(i = y+1; i < x; i++)
            if(i%2 != 0)
                res += i;
    return res;
    }
}


int main(){
    int x, y;

    scanf("%d %d", &x, &y);
    printf("%d\n", soma(x, y));
}