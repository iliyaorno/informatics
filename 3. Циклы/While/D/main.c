#include <stdio.h>

int main () {
    int i = 1, n;
    scanf("%d", &n);
 
    while(i < n){
        i <<= 1;
    }
    if (n == i){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}