#include <stdio.h>



int main()
{
    int n, sum = 0, x;
    scanf("%d", &x);
    for (int i = 0; i < x; i++){
            scanf("%d", &n);
            sum += n;
    }
    printf("%d", sum);
    return 0;
}