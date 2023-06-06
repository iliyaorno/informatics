#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int mn, hr;
    hr = n / 60 % 24;
    mn = n % 60;
    printf("%d %d", hr, mn);
    return 0;
}
