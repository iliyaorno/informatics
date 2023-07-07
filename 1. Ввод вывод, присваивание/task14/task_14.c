#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int h1, m1, s1, h2, m2, s2;
    scanf("%d" "%d" "%d" "%d" "%d" "%d", &h1, &m1, &s1, &h2, &m2, &s2);
    int x = (h2 - h1) * 3600 + (m2 - m1) * 60 + s2 - s1;
    printf("%d", x);
    return 0;
}
