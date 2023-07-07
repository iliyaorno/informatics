#include <stdio.h>

int main () {
    int n;
    int i = 1;
    scanf("%d", &n);
 
    while(i < n) {
        i <<= 1;
    }
    if (n == i) {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}