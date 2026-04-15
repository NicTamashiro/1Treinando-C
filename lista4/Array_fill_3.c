#include <stdio.h>

int main(){

    double N[10];
    double num;

    scanf("%lf", &num);

    N[0] = num;

    for(int i = 1; i < 10; i++){
        N[i] = N[i - 1] / 2;
    }

    for(int i = 0; i < 10; i++){
        printf("N[%d] = %.4lf\n", i, N[i]);
    }

    return 0;
}