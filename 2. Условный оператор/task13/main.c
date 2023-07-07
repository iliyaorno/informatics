#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c, d, e, f;
    scanf("%d" "%d" "%d" "%d", &a, &b, &c, &d);
    f = (100 * c + d - 100 * a - b) % 100;
    e = (100 * c + d - 100 * a - b) / 100;
    printf("%d %d", e, f);

    return 0;
}
