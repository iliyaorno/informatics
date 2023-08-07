// https://informatics.msk.ru/mod/statements/view.php?id=252&chapterid=310#1

#include <stdio.h>
#include <stdbool.h>

bool IsPrime(int a)
{
    for (int i = 2; i * i <= a; i++)
        if (a % i == 0){
            return false;
        }
    return true;
}
int main()
{
    int n;
    scanf("%d", &n);
    if (IsPrime(n)){
        printf("prime");
    }
    else{
        printf("composite");
    }
    return 0;
}