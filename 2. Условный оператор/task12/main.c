#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, m;
    scanf("%d" "%d", &n, &m);
    if(n == 0 && m == 0){
        printf("YES");
    }
    else if (n == 0 || (m % n) != 0){
        printf("NO");
    }
    else{
        printf("%d", (-m / n));
    }

    return 0;
}
