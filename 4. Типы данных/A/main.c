#include <stdio.h>
#include <stdbool.h>

bool IsDigit(unsigned char c) {
    if (c <= '9' && c >= '0') {
        return true;
    }
    else{
        return false;
    }
}

int main () {
    char x;
    scanf("%c", &x);
    if(IsDigit(x) == true) {
        printf("yes");
    }
    else{
        printf("no");
    }
    
}