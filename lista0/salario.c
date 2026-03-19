#include <stdio.h>
 
int main() {
 
    int numero, horas;
    float valorHora;
    
    scanf("%d", &numero);
    scanf("%d", &horas);
    scanf("%f", &valorHora);
    
    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2f\n", horas*valorHora);
    
    return 0;
}