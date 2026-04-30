#include <stdio.h>
#include <string.h>

int main(){

    char caracteres[15];
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf(" %14[^\n]", caracteres);

        int soma = 0;
        int num = 0;
        int lendoNumero = 0;

        for(int j = 0; j < (int)strlen(caracteres); j++){
            if(caracteres[j] >= '0' && caracteres[j] <= '9'){
                num = num * 10 + (caracteres[j] - '0');
                lendoNumero = 1;
            } else {
                if(lendoNumero){
                    soma+= num;
                    num = 0;
                    lendoNumero = 0;
                }
            }
        }
        if(lendoNumero){
            soma+=num;
        }
        printf("%d\n", soma);
    }

    return 0;
}