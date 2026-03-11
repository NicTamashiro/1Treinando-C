#include <stdio.h>

int main() {
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    int count = (a % 2 == 0) + (b % 2 == 0) + (c % 2 == 0) + (d % 2 == 0) + (e % 2 == 0);

    int impar = (a % 2 != 0) + (b % 2 != 0) + (c % 2 != 0) + (d % 2 != 0) + (e % 2 != 0);

    int positivo = (a > 0) + (b > 0) + (c > 0) + (d > 0) + (e > 0);

    int negativo = (a < 0) + (b < 0) + (c < 0) + (d < 0) + (e < 0);
    
    printf("%d valor(es) par(es)\n", count);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);


    return 0;
}