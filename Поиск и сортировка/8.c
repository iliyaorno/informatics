// https://informatics.msk.ru/mod/statements/view.php?id=270&chapterid=1440#1

#include <stdio.h>

int main(){
    int m1;
    int m2;
    int n;
    int k;

    scanf("%d" "%d", &n, &k);
    m1 = k;
    m2 = 0;
    for (int i = 1; i < n; i++) {
        scanf("%d", &k);
        if (k > m1) { 
            m2 = m1;
            m1 = k;
        }
        if (k > m2 && k < m1) { 
            m2 = k;
        }
    }
    printf("%d", m2);
}
