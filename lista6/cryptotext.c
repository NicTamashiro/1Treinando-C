#include <stdio.h>
#include <string.h>

int main(){

    int n;
    char letras[100];
    char decifrada[100];
    
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int k = 0;
        scanf(" %99[^\n]", letras);

        for(int j = 0; j < (int)strlen(letras); j++){
            if(letras[j] >= 'a' && letras[j] <= 'z'){
                decifrada[k] = letras[j];
                k++;
            }
        }

        decifrada[k] = '\0';

        for(int j = k - 1; j >= 0; j--){
            printf("%c", decifrada[j]);
        }
        printf("\n");
    }

    return 0;
}