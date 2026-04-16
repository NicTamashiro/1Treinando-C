#include <stdio.h>
#include <string.h>

int main(){

    char riso[51];
    char vogais[51];
    int j = 0;

    scanf(" %50[^\n]", riso);

    //extrai so as vogais
    for(int i = 0; i < strlen(riso); i++){
        if(riso[i]=='a' || riso[i]=='e' || riso[i]=='i' || riso[i]=='o' || riso[i]=='u'){
            vogais[j] = riso[i];
            j++;
        }
    }

    vogais[j] = '\0';

    //verifica se eh um palindromo
    int inicio = 0;
    int fim = strlen(vogais) - 1;
    int palindromo = 1;

    while(inicio < fim){
        if(vogais[inicio] != vogais[fim]){
            palindromo = 0;
            break;
        }
        inicio++;
        fim--;
    }

    if(palindromo) printf("S\n");
    else printf ("N\n");
    

    return 0;
}

/*

vogais = uaauauaau
incio = 0 | fim = 8

0 < 8
incio = 1 | fim = 7

1 < 7
inicio = 2 | fim = 6

2 < 6 
incio = 3 | fim = 5

3 < 5
incio = 4 | 4

printf("S\n");

*/