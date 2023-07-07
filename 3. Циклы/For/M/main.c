#include <stdio.h>



int main()
{
    int n, x, cnt = 0;
    scanf("%d", &x);
    for (int i = 0; i < x; i++){
            scanf("%d", &n);
            if(n == 0){
                cnt += 1;
            }
    }
    printf("%d", cnt);
    return 0;
}