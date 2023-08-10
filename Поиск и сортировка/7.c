// https://informatics.msk.ru/mod/statements/view.php?id=270&chapterid=1412#1

#include <stdio.h>

int main(){
    int n;
    int x;
    int st = 0;

    scanf("%d", &x);
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i]);
        } 
        for (int j = 0; j < n; j++) {
            if (x == a[i]){
                st = 1;
            }
        }
    }

    if (st == 1) {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
