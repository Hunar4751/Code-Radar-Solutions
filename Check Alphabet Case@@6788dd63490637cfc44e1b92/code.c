#include <stdio.h>

int main() {
    char c[1];
    scanf("%c",&c);
    if (c[0]<="z"&& c[0]>="a" ){
        printf("Lowercase");
    }else if (c[0]<="Z" && c[0]>="A"){
        printf("Uppercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}