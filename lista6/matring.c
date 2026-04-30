#include <stdio.h>
#include <string.h>

int main(){

    char rows[4][100];

    while(scanf("%s%s%s%s", rows[0], rows[1], rows[2], rows[3]) == 4){
        int num_cols = strlen(rows[0]);

        // Montando os numeros de cada coluna
        long long cols[100];
        for(int i = 0; i < num_cols; i++){
            cols[i] = ((rows[0][i]-'0') * 1000) + ((rows[1][i]-'0') * 100) + ((rows[2][i]-'0') * 10) + ((rows[3][i]-'0'));
        }

        // Pegando F e L
        long long F = cols[0];
        long long L = cols[num_cols - 1];

        for(int i = 1; i < num_cols - 1; i++){
            int c = (F * cols[i] + L) % 257;
            printf("%c", c); // imprime como caractere ASCII  Ex: 79 -> 'O' | 66 -> 'B' 
        }
        printf("\n");
    }

    return 0;
}

/*

rows[0][0] = '4' → 4 * 1000 = 4000
rows[1][0] = '9' → 9 * 100  =  900
rows[2][0] = '3' → 3 * 10   =   30
rows[3][0] = '2' → 2 * 1    =    2
                              4932  

*/