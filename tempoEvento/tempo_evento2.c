#include <stdio.h>

int main() {
    int start_day, end_day;
    int h1, m1, s1, h2, m2, s2;

    scanf("Dia %d", &start_day);
    scanf("%d : %d : %d", &h1, &m1, &s1);
    scanf(" Dia %d", &end_day);
    scanf("%d : %d : %d", &h2, &m2, &s2);

    long start = ((start_day * 24 + h1) * 60 + m1) * 60 + s1;
    long end   = ((end_day   * 24 + h2) * 60 + m2) * 60 + s2;

    long diff = end - start;

    int days    = diff / 86400; diff %= 86400;
    int hours   = diff / 3600;  diff %= 3600;
    int minutes = diff / 60;
    int seconds = diff % 60;

    printf("%d dia(s) %d hora(s) %d minuto(s) %d segundo(s)\n", days, hours, minutes, seconds);

    return 0;
}