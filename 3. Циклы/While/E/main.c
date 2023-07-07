#include <stdio.h>

int main () {
    int i = 0, y;
    scanf("%d", &y);
    
    while(i * i < y){
        i += 1;
    }
    printf("%d", i);
    return 0;
}