#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, m;
    scanf("%d" "%d", &n, &m);
    int x = (n - (m % n)) % n;
    printf("%d", x);
    return 0;
}
