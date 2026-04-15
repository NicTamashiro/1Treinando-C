#include <stdio.h>

int main(){

    int t;
    scanf("%d", &t);

    int n[10];

    for(int i = 0; i < 10; i++){
        n[i] = i % t;
    }

    for(int i = 0; i < 10; i++){
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}