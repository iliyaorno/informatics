// https://informatics.msk.ru/mod/statements/view.php?id=270&chapterid=227#1

#include <stdio.h>

int main() {
    int n;
    int max = 0;

    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        if (a[i] > max){
            max = a[i];
            
        }
    } 
    printf("%d", max);

    return 0;
}
