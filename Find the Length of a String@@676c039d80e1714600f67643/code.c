#include <stdio.h>
int main(){
    char string[100];
    scanf("%99s",string);
    for(int i=0;i<100;i++){
        if(string[i]=='\0'){
            printf("%d",i);
            break;
        }
    }
    return 0;
}