#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c, d;
    scanf("%d" "%d" "%d" "%d", &a, &b, &c, &d);
    for(int i = a; i < b; i++){
        if (i % d == c){
            printf("%d \n", i);
        }
    }

    return 0;
}
