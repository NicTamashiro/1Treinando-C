#include <stdio.h>

int main(){

    int n;

    while(scanf("%d", &n) && n != 0){
        int arr[100][100];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int top = i;
                int bottom = n - 1 - i;
                int left = j;
                int right = n - 1 - j;

                int menor = top;
                if(bottom < menor) menor = bottom;
                if(left   < menor) menor = left;
                if(right  < menor) menor = right;

                arr[i][j] = menor + 1;
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j > 0) printf(" ");
                printf("%3d", arr[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}