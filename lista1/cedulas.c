#include <stdio.h>
 
int main() {
 
    int n;
    
    scanf("%d", &n);
    
    int decompor100 = n / 100;
    int resto100 = n % 100;
    int decompor50 = resto100 / 50;
    int resto50 = resto100 % 50; 
    int decompor20 = resto50 / 20;
    int resto20 = resto50 % 20;
    int decompor10 = resto20 / 10;
    int resto10 = resto20 % 10;
    int decompor5 = resto10 / 5;
    int resto5 = resto10 % 5;
    int decompor2 = resto5 / 2;
    int resto2 = resto5 % 2;
    int decompor1 = resto2 / 1;
    int resto1 = resto2 %1;
    
    printf("%d\n", n);
    printf("%d nota(s) de R$ 100,00\n", decompor100);
    printf("%d nota(s) de R$ 50,00\n", decompor50);
    printf("%d nota(s) de R$ 20,00\n", decompor20);
    printf("%d nota(s) de R$ 10,00\n", decompor10);
    printf("%d nota(s) de R$ 5,00\n", decompor5);
    printf("%d nota(s) de R$ 2,00\n", decompor2);
    printf("%d nota(s) de R$ 1,00\n", decompor1);
    
    
    return 0;
}