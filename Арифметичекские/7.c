 // https://informatics.msk.ru/mod/statements/view.php?id=252&chapterid=1453#1

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;

    scanf("%d", &x);

    for (int j = 0, n = 0; n <= x; ++n) {
        j = (j * 10 + 1) % x;
        if (j == 0) {
            for (int i = 0; i <= n; ++i) {
                printf("%d", 1);
            }
            printf("\n");
            return 0;
        }
    }
    printf("NO\n");
}