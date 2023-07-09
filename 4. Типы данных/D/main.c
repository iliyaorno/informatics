#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool Compare(char c1[20], char c2[20])
{
    if(strcmp(c1, c2) == true) {
        return true;
    }
    else {
        return false;
    }
}

int main () {
    char x1[20];
    char x2[20];
    scanf("%s", &x1);
    scanf("%s", &x2);
    if(Compare(x1, x2) == true) {
        printf("yes");
    }
    else {
        printf("false");
    }
}