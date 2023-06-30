#include <stdio.h>


int main()
{
    int n, sum = 0;
    for (int i = 0; i < 100; i++){
            scanf("%d", &n);
            sum += n;
    }
    printf("%d", sum);
    return 0;
}