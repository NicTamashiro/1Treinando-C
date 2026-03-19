#include <stdio.h>
 
int main() {
 
    int dias;

    scanf("%d", &dias);

    int ano = (dias / 365);
    int restoAno = (dias % 365);
    int mes = (restoAno / 30);
    int restoMes = (restoAno % 30);

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", restoMes);
    return 0;
 
    return 0;
}