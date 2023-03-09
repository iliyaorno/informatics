#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b;
    scanf("%d" "%d", &a, &b);
    int temp1, temp2;
    temp1 = a;
    temp2 = b;
    a = temp2;
    b = temp1;
    printf("%d %d", a, b);
    return 0;
}
