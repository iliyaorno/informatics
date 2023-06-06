#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, m, k;
    scanf("%d" "%d" "%d", &n, &m, &k);
    if(k < n * m && ((k % n == 0) || (k % m == 0))){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}
