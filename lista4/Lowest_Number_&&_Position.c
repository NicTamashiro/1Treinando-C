#include <stdio.h>

int main(){

    int size, n, menor, pos;

    scanf("%d", &size);
    int lista[size];

    // lê e armazena os elementos
    for(int i = 0; i < size; i++){
        scanf("%d", &n);
        lista[i] = n;    
    }   

    menor = lista[0]; // menor valor começa como o primeiro elemento
    pos = 0;          // posição do menor valor

    // percorre a partir do segundo elemento
    for(int i = 1; i < size; i++){
        if (lista[i] < menor){
            menor = lista[i]; // atualiza o menor valor
            pos = i;          // atualiza a posição
        }  
    }

    printf("Menor valor: %d\n", menor);    
    printf("Posicao: %d\n", pos);    

    return 0;
}