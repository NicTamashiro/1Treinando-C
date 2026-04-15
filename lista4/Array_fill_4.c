#include <stdio.h>

int main(){

    int par[5], impar[5];           // arrays de tamanho 5
    int qtd_par = 0, qtd_impar = 0; // contadores de cada array
    int num;                        // numero lido

    for (int i = 0; i < 15; i++){
        scanf("%d", &num);  

        if(num % 2 == 0){   // se for par
            par[qtd_par] = num;
            qtd_par++;

        if(qtd_par == 5){   //array par cheio, imprime e reseta
            for(int j = 0; j < 5; j++){
                printf("par[%d] = %d\n", j, par[j]);
                qtd_par = 0;
            }
        }

        } else {    // se for impar
            impar[qtd_impar] = num;
            qtd_impar++;

            if(qtd_impar == 5){
                for(int j = 0; j < 5; j++){   //array par impar, imprime e reseta
                    printf("impar[%d] = %d\n", j, impar[j]);
                    qtd_impar = 0;
                }
            }
        }
        
    }

    // imprime o que sobrou: impar primeiro, depois par
    for(int j = 0; j < qtd_impar; j++){
        printf("impar[%d] = %d\n", j, impar[j]);
    }

    for(int j = 0; j < qtd_par; j++){
        printf("par[%d] = %d\n", j, par[j]);
    }
    

    return 0;
}