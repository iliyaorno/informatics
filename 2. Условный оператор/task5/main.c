#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c, x, y;
    scanf("%d" "%d" "%d", &a, &b, &c);
    if (a > b){
        x = a;
    } 
    else {
        x = b;
    }
    if (x > c){
        y = x;
    }
    else {
        y = c;
    }
    printf("%d", y);

    return 0;
}
