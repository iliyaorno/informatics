#include <stdio.h>

int main()
{
    int n, x, r = 0, l = 0, nl = 0;
    scanf("%d", &x);
    for (int i = 0; i < x; i++){
        for (int j = 0; j < i; j++){
            printf("%d ", i);
        }
    }
    return 0;
}