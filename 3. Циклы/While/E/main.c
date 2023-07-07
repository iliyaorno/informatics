#include <stdio.h>

int main () {
    int y;
    int i = 0;
    scanf("%d", &y);
    
    while(i * i < y) {
        i += 1;
    }
    printf("%d", i);
    return 0;
}