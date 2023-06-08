#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a1, b1, a2, b2;
    scanf("%d" "%d" "%d" "%d", &a1, &b1, &a2, &b2);
    if ((a1 == a2 || b1 == b2) || (a1 == a2 && b1 == b2)){
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}