#include <stdio.h>
 
int main() {
 
    double a,b,c;

    scanf("%lf %lf %lf", &a, &b, &c);

    double delta = (b*b) - (4*a*c);
    double bhaskaraR1 = ((-b) + sqrt(delta)) / (2*a);
    double bhaskaraR2 = ((-b) - sqrt(delta)) / (2*a);

    if (delta < 0 || a == 0){
        printf("Impossivel calcular\n");
    } else {
        printf("R1 = %.5lf\n", bhaskaraR1);
        printf("R2 = %.5lf\n", bhaskaraR2);
    }
 
    return 0;
}