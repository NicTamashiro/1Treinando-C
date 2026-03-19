#include <stdio.h>

int main() {
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    int count = (a % 2 == 0) + (b % 2 == 0) + (c % 2 == 0) + (d % 2 == 0) + (e % 2 == 0);
    
    printf("%d valores pares\n", count);
    return 0;
}