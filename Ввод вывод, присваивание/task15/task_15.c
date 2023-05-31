#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, m;
    scanf("%d" "%d", &n, &m);
    int x = m / n + !(m % n == 0);
    printf("%d", x);
    return 0;
}
