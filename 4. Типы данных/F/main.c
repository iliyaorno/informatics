#include <stdio.h>
#include <ctype.h>


int main () {
    char s[80];
    int cnt = 0;
    scanf("%[^\n]s", s);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ' && s[i + 1] != ' '){
            cnt++;    
        }
    }
    printf("%d", cnt + 1);
}