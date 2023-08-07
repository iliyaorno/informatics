// https://informatics.msk.ru/mod/statements/view.php?id=270&chapterid=225#1

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int x;
    int k;
    scanf ("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    scanf ("%d", &x);
    for (int i = 0; i < n; i++) {
        if (abs (a[i] - x) < abs (k - x) || abs (a[i] - x) == abs (k - x) && a[i] < k) {
            k = a[i];
        }
    } 
    printf("%d", k);
    return 0;
}