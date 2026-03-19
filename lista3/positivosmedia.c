#include <stdio.h>

int main() {

    float valor;
    int positivos = 0;
    int i;
    float soma = 0;

    for(i = 0; i < 6; i++){
        scanf("%f", &valor);

        if(valor >= 0){
            positivos++;
            soma += valor;
        }
    }

    printf("%d valores positivos\n", positivos);
    float media = soma / positivos;
    printf("%.1f\n", media);
    return 0;
}
