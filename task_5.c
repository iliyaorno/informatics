#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, m;
    scanf("%d" "%d", &n, &m);
    int x = ((109 + n * m % 109) % 109);
    printf("%d", x);
    return 0;
}
