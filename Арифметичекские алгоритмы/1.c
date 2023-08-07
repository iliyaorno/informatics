// https://informatics.msk.ru/mod/statements/view.php?id=252#1

#include <stdio.h>


int main()
{
    int a;
    int b;
    int c;
    int d;
    int m;
    int n;
    int i = 2;

    scanf("%d" "%d" "%d" "%d", &a, &b, &c, &d);
    m = a * d + b * c;
    n = b * d;

    while (i <= n && i <= m) {
        if (n % i == 0 && m % i == 0) {
            n = n / i;
            m = m / i;
        }
        else {
            i++;
        }
    }

    printf("%d %d", m, n);
    return 0;
}