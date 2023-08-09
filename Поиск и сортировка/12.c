// https://informatics.msk.ru/mod/statements/view.php?id=192&chapterid=4#1
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    int n;
    int k;
    int x;
    int *a;
    a = malloc(n * sizeof(int));
    scanf("%d" "%d", &n, &k);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < k; j++) {
        scanf("%d", &x);
        int L = 0;
        int R = n;
        while (L < R) {
            int M = L + (R-L) / 2;
            if (a[M] >= x)
                R = M;
            else
                L = M + 1;
        }
 
        if (a[L] == x){
            printf("YES\n");
        }
        else{ 
            printf("NO\n");
        }
    }
    return 0;
}