// https://informatics.msk.ru/mod/statements/view.php?id=270&chapterid=228#1

#include <stdio.h>

int main(){
    int n;
    int max = 0;
    int max_i = 0;

    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        if (a[i] > max){
            max = a[i];
            max_i = i;
        }
    } 
    printf("%d", max_i + 1);

    return 0;
}
