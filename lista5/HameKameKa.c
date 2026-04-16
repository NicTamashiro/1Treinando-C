#include <stdio.h>
#include <string.h>

int main(){

    int C;
    if(scanf("%d", &C) == 0){
        printf("Apenas numeros inteiros.");
        return 1;
    }

    for(int i = 0; i < C; i++){
        char s[210];
        scanf("%s", s);

        int j = 1;  // pula o 'h'

        //conta os a's do grupo 1
        int g1 = 0;
        while(s[j] == 'a'){
            g1++;
            j++;
        }

        j+=3;   // pula 'm', 'e', 'k'

        // conta os a's do grupo 2
        int g2 = 0;
        while(s[j] == 'a'){
            g2++;
            j++;
        }

        // imprime k + (g1*g2) letras a
        printf("k");
        for(int i = 0; i < g1*g2; i++){
            printf("a");
        }

        printf("\n");
    }


    return 0;
}