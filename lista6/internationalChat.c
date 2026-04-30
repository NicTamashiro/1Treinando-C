#include <stdio.h>
#include <string.h>

int main(){

    int cases;
    int group;

    scanf("%d", &cases);

    for(int i = 0; i < cases; i++){
        scanf("%d", &group);
        
        char primeira[21], atual[21];
        scanf("%s", primeira);

        int iguais = 1;
        for(int j = 1; j < group; j++){
            scanf("%s", atual);
            if(strcmp(atual, primeira) != 0){
                iguais = 0;
            }
        }
        if(iguais){
            printf("%s\n", primeira);
        } else {
            printf("ingles\n");
        }
    }

    return 0;
}