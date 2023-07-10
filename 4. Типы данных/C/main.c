#include <stdio.h>
#include <ctype.h>

unsigned char UpDown(unsigned char c)
{
    if(c >= 'a' && c <= 'z') {
        return toupper(c);
    }
    if(c >= 'A' && c <= 'Z') {
        return tolower(c);
    }
}

int main () {
    char x;
    scanf("%c", &x);
    printf("%c", UpDown(x));
    
}