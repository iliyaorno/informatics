 // https://informatics.msk.ru/mod/statements/view.php?id=252&chapterid=1465#1

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int n = 1;
    scanf("%d" "%d", &a, &b);

    while (a != b){
        if (a > b){
            a -= b;
        }
        else {
            b -= a;
        }
        ++n;
    }

    printf("%d", n);

    return 0;
}