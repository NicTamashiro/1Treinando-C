#include <stdio.h>

int main(){

    char operation;
    float arr[12][12];
    float sum = 0;
    int contador = 0;

    scanf(" %c", &operation);

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%f", &arr[i][j]);
        }
    }

    for(int i = 1; i < 12; i++){
        for(int j = 0; j < i; j++){
            sum+=arr[i][j];
            contador++;
        }
    }

    if(operation == 'S'){
        printf("%.1f\n", sum);
    } else{
        printf("%.1f\n", sum / contador);
    }

    return 0;
}