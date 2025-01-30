#include <stdio.h>

int main() {
    char c[1];
    scanf("%c",&c);
    if (c<="z"&& c>="a" ){
        printf("Lowercase");
    }else if (c<="Z" && c>="A"){
        printf("Uppercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}