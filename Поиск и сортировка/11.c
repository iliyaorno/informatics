// https://informatics.msk.ru/mod/statements/view.php?id=192&chapterid=3#1
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
 
 
int main() {
    int n;
    int cnt = 0;
    int m = 1;
    scanf("%d", &n);
    while(m < n){
        m = m * 2;
        cnt++;
    }
    printf("%d", cnt);
}