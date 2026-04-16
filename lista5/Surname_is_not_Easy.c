#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
    
    int n;
    scanf("%d", &n);

    while(n--){
        char nome[43];
        scanf("%s", nome);

        int consecutivas = 0;    // contador de consoantes seguidas
        int dificil = 0;    //0 = facil, 1 = dificil

        for(int i = 0; i < (int)strlen(nome); i++){
            char c = tolower(nome[i]);  // converte pra minúscula pra facilitar a comparação
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                consecutivas = 0;   // é vogal, zera o contador
            } else {
                consecutivas++; // é consoante, incrementa o contador
                if(consecutivas >=3){   // 3 ou mais consoantes seguidas = difícil
                    dificil = 1;
                    break;
                }
            }
        }

        if(dificil){
            printf("%s nao eh facil\n", nome);
        } else {
            printf("%s eh facil\n", nome);
        }
    }
    
    return 0;
}