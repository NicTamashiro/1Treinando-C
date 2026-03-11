#include <stdio.h>


int main() {

    float salario;
    scanf("%f", &salario);

    if (salario >= 0 && salario <= 400.00){
        printf("Novo salario: %.2f\n", 1.15*salario);
        printf("Reajuste ganho: %.2f\n", 0.15*salario);
        printf("Em percentual: %d %%\n", 15);

    } else if (salario >= 400.01 && salario <= 800.00){
        printf("Novo salario: %.2f\n", 1.12*salario);
        printf("Reajuste ganho: %.2f\n", 0.12*salario);
        printf("Em percentual: %d %%\n", 12);

    } else if (salario >= 800.01 && salario <= 1200.00){
        printf("Novo salario: %.2f\n", 1.10*salario);
        printf("Reajuste ganho: %.2f\n", 0.10*salario);
        printf("Em percentual: %d %%\n", 10);

    } else if (salario >= 1200.01 && salario <= 2000.00){
        printf("Novo salario: %.2f\n", 1.07*salario);
        printf("Reajuste ganho: %.2f\n", 0.07*salario);
        printf("Em percentual: %d %%\n", 7);

    } else {
        printf("Novo salario: %.2f\n", 1.04*salario);
        printf("Reajuste ganho: %.2f\n", 0.04*salario);
        printf("Em percentual: %d %%\n", 4);
    }

    return 0;
}
