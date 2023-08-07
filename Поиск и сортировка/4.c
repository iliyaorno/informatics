// https://informatics.msk.ru/mod/statements/view.php?id=270&chapterid=226#1

#include <stdio.h>

int main(){
    int n;
    int x;
    int st = 0;
    scanf ("%d", &n);
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    scanf ("%d", &x);
    for (int i = 0; i < n; i++) {
        if (x == a[i]){
            b[st] = i;
            st++;
        }
    } 
    for (int i = 0; i < n; i++) {
        printf ("%d ", b[i]);
    }

    return 0;
}