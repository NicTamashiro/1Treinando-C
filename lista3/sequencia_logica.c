#include <stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d %d %d\n", i, i*i, i*i*i);
        printf("%d %d %d\n", i, (i*i)+1, (i*i*i)+1);
    }

    return 0;
}

// i = 1 | 1, 1*1, 1*1*1 -> 1, 1, 1 | 1, (1*1)+1, (1*1*1)+1; -> 1, 2, 2;
// i = 2 | 2, 2*2, 2*2*2 -> 2, 4, 8 | 2, (2*2)+1, (2*2*2)+1; -> 2, 5, 9; 