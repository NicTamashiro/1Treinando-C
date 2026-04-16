#include <stdio.h>
#include <string.h>

int main(){
    char str1[101], str2[101], str3[101];

    scanf(" %100[^\n]", str1);
    scanf(" %100[^\n]", str2);
    scanf(" %100[^\n]", str3);

    // Linha 5: A B C
    printf("%s%s%s\n", str1, str2, str3);
    // Linha 6: B C A
    printf("%s%s%s\n", str2, str3, str1);
    // Linha 7: C A B
    printf("%s%s%s\n", str3, str1, str2);
    // Linha 8: apenas 10 caracteres de cada (A B C)
    printf("%.10s%.10s%.10s\n", str1, str2, str3);

    return 0;
}