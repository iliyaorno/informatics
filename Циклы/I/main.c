#include <stdio.h>



int main()
{
    int n, cnt = 2;
    scanf("%d", &n);
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0){
            ++cnt;
            if (i * i != n){
                ++cnt;
            }
        }
    }
    if (n == 1){
        --cnt;
    }
    printf("%d", cnt);
    return 0;
}