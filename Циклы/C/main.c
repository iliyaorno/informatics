#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
    int n, m;
    scanf("%d" "%d", &n, &m);
    for(int i = 2; i < n; i++){
        if (i * i <= m){
            printf("%d \n", i * i);
        }
    }

    return 0;
}
