// https://informatics.msk.ru/mod/statements/view.php?id=270&chapterid=1447#1

#include <stdio.h>

int main() {
    int n;
    int x;
    int y;

    scanf("%d", &n);
    int a[n + 1];
    scanf("%d", &a[0]);
    x = a[0];
    y = a[0];
    for(int i = 1; i < n; i++) {
        scanf("%d", &a[i]);
        if(a[i] > x) {
            x = a[i];
        }
        else if(a[i] < y) {
            y = a[i];
        }
    }
    for(int i = 0; i < n; i++) {
        if(a[i] == x) {
            a[i] = y;
            printf("%d ", a[i]);
        }
    }
    return 0;
}
