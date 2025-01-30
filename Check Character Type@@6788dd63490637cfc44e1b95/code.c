#include <stdio.h>

int main() {
    char c ;
    scanf("%c",&c);
    if (c<='9' && c>='0'){
        printf("Digit");
    }else if((c<='z' && c>='a') || (c<='Z' && c>='A')){
        if (c == 'a'|| c=='e'||c=='i'||c=='o'||c=='u' ||c=='A'|| c =='E'||c=='I'||c=='O'||'U'){
            printf("Vowel");
        }else{
            printf("Consonant");
        }
    }else{
        printf("Special Character");
    }
    return 0;
}