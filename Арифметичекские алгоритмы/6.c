 // https://informatics.msk.ru/mod/statements/view.php?id=252&chapterid=1452#1

#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b){
    if (b == 0){
        return a;
    }
    else{
        return gcd(b, a % b);
    }
}

int main(){
    int x1;
    int y1;
    int x2;
    int y2;
    int x;
    int y;
    int s;
    
    scanf("%d" "%d" "%d" "%d", &x1, &y1, &x2, &y2);
    x = abs(x2 - x1);
    y = abs(y2 - y1);
    s = gcd(x, y);
    printf("%d", s + 1);
    return 0;
}