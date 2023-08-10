// https://informatics.msk.ru/mod/statements/view.php?id=192&chapterid=4#1
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int bin_search(int a[], int key, int m){
    int left = 0;
    int right = m - 1;
    int mid;

    while (left <= right){
        mid = (left + right) / 2;
        if (key == a[mid]) {
            return true;
        }
        if (key > a[mid]) {
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    return false;
}
int main(){
    int n;
    int m;
    scanf("%d" "%d", &n, &m);
    int *a;
    a = malloc(n * sizeof(int));
    int *b;
    b = malloc(m * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);
    for (int i = 0; i < m; i++)
    {
        if (bin_search(a, b[i], n))
            printf("YES\n");
        else
            printf("NO\n");
    }
    free(a);
    free(b);
    return 0;
}