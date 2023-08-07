// https://informatics.msk.ru/mod/statements/view.php?id=252&chapterid=1422#1

#include <stdio.h>

int gcd(int a, int b){
    if (b == 0){
        return a;
    }
    else{
        return gcd(b, a % b);
    }
}

int main(){
    int a;
    int b;
    int x;
    scanf("%d" "%d", &a, &b);
    x = (a / gcd(a, b)) * b;
    printf("%d", x);
    return 0;
}