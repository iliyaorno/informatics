#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    if((n == 1) || (n % 4 == 0)){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}
