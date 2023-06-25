#include <stdio.h>

int main()
{
    int n, x, r = 0, l = 0, nl = 0;
    scanf("%d", &x);
    for (int i = 0; i < x; i++){
            scanf("%d", &n);
            if(n == 0){
                nl += 1;
            }
            else if(n > 0){
                r += 1;
            }
            else if(n < 0){
                r += 1;
            }
    }
    printf("%d %d %d", nl, r, l);
    return 0;
}