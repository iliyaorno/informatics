#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int col, r, c, cop, rb;
    scanf("%d" "%d" "%d", &r, &c, &col);
    cop = c * col;
    rb = r * col + (cop / 100);
    cop = cop % 100;
    printf("%d %d", rb, cop);
    return 0;
}
