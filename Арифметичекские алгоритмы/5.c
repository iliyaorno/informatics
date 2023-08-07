 // https://informatics.msk.ru/mod/statements/view.php?id=252&chapterid=1441#1

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
    int n;
    int k;

    scanf("%d" "%d", &n, &k);
    for (int i = 1; i < n; i++) {
        scanf("%d", &a);
        k = gcd(k, a);
    }
    printf("%d", k);
    return 0;
}