#include <stdio.h>

int main() {
    char c;
    scanf("%c",&c);
    if (c<="z"&& c>="a" ){
        printf("Uppercase");
    }else if (c<="Z" && c>="A"){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}