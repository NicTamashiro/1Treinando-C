#include <stdio.h>

int main(){

    int line;
    char operation;
    float arr[12][12];
    float soma = 0;
    int contador = 0;

    scanf("%d", &line);
    scanf(" %c", &operation);

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%f", &arr[i][j]);

            if(i == line){
            soma+=arr[line][j];
            contador++;
            }
        }
    }

    if(operation == 'S'){
        printf("%.1f\n", soma);
    } else{
        printf("%.1f\n", soma / contador);
    }


    return 0;
}