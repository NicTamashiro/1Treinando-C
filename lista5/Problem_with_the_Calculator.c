#include <stdio.h>
#include <string.h>

int main(){

    char caracteres[15];
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf(" %14[^\n]", caracteres);

        int soma = 0;   // acumula a soma dos números encontrados
        int num = 0;    // vai montando o número dígito por dígito
        int lendoNumero = 0;    // 1 se estamos no meio de um número, 0 se não

        for(int i = 0; i < (int)strlen(caracteres); i++){
            if(caracteres[i] >= '0' && caracteres[i] <= '9'){ // verifica se eh um numero pela tabela ASCII
                num = num * 10 + (caracteres[i] - '0'); //empurra dígitos anteriores e adiciona o novo
                lendoNumero = 1;    // marca que estamos montando um número
            } else {
                if(lendoNumero){     // se vinha lendo um número e achou uma letra, o número acabou
                    soma+= num;      // soma o número que foi montado
                    num = 0;         // zera para montar o próximo número
                    lendoNumero = 0; // marca que não estamos mais lendo um número
                }
            }
        }

        // se a linha terminar com dígito, o último número nunca encontrou
        // uma letra para ser somado dentro do for, então soma aqui
        if(lendoNumero){
            soma+= num;
        }

        printf("%d\n", soma);

    }

    return 0;
}