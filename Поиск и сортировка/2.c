// https://informatics.msk.ru/mod/statements/view.php?id=270&chapterid=224#1

#include <stdio.h>
#include <ctype.h>

int main() {
    int n;
    int x;
    int st = 0;
    scanf ("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    scanf ("%d", &x);
    for (int i = 0; i < n; i++) {
        if (x == a[i]){
            st = 1;
        }
    } 
    if (st == 1) {
        printf ("YES");
    }
    else {
        printf ("NO");
    }
    return 0;
}