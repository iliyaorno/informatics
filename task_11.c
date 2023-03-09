#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int mn, hr;
    int h = n / 3600 % 24;
    int m1 = n % 3600 / 60 / 10 ;
    int m2 = n % 3600 / 60 % 10;
    int s1 = n % 60 / 10;
    int s2 = n % 60 % 10;
    printf("%d:%d%d:%d%d", h, m1, m2, s1, s2);
    return 0;
}
