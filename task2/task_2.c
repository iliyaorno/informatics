#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int n1 = n - 1;
    int n2 = n + 1;
    printf("The next number for the number %d is %d. \n", n, n2);
    printf("The previous number for the number %d is %d. \n", n, n1);
    return 0;
}
