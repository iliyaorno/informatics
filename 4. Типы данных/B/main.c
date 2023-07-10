#include <stdio.h>
#include <ctype.h>

unsigned char ToUpper(unsigned char c)
{
    if(c >= 'a' && c <= 'z') {
        return toupper(c);
    }
}

int main () {
    char x;
    scanf("%c", &x);
    printf("%c", ToUpper(x));
    
}