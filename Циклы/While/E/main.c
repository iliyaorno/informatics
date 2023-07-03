#include <stdio.h>

int main () {
    int i = 1, x, y;
    scanf("%d""%d", &x, &y);
    
    while(y - x >= 0){
        x *= 1.1;
        i += 1;
    }
    printf("%d", i);
    return 0;
}