#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i = 2;
    while(n % i != 0){
        i += 1;
        if (n % i == 0){
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}