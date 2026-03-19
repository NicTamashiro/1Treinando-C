#include <stdio.h>

int main() {

    int x, i;
    scanf("%d", &x);

    for(i = 0; i < 6; i++){
        if(x % 2 == 0){
            printf("%d\n", x+1);
            x+=2;
        } else {
            printf("%d\n", x);
            x+=1;
        }
    }

    return 0;
}
