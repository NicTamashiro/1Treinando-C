#include <stdio.h>

int main(){
    int n, qtd;
    char tipo;
    int c = 0, r = 0, s = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%d %c", &qtd, &tipo);
          switch (tipo){
            case 'C': c += qtd; break;
            case 'R': r += qtd; break;
            case 'S': s += qtd; break;
        }
     } 

     int total = c + r + s;
     printf("Total: %d cobaias\n", total);
     printf("Total de coelhos: %d\n", c);
     printf("Total de ratos: %d\n", r);            
     printf("Total de sapos: %d\n", s);
     printf("Percentual de coelhos: %.2f %%\n", (float)c / total * 100);
     printf("Percentual de ratos: %.2f %%\n", (float)r / total * 100);
     printf("Percentual de sapos: %.2f %%\n", (float)s / total * 100);

return 0;
}