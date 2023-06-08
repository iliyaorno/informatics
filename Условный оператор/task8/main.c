#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a1, b1, a2, b2;
    scanf("%d" "%d" "%d" "%d", &a1, &b1, &a2, &b2);
    int d_x = a1 - a2;
    int d_y = b1 - b2;
    if (d_x != 0 && d_y != 0) {
        if (d_x == d_y || d_x == -d_y) {
            printf("YES");
        }
        else {
            printf("NO");
        }
    }
    else if (d_x != 0 || d_y != 0) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}
