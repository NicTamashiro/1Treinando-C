#include <stdio.h>
 
int main() {
 
    int segundos;

    scanf("%d", &segundos);

    int horas = (segundos / 3600);
    int restoHoras = (segundos % 3600);
    int minutos = (restoHoras / 60);
    int restoMinutos = (restoHoras % 60);

    printf("%d:%d:%d\n",horas, minutos, restoMinutos);
 
    return 0;
}