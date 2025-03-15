#include <stdio.h>
int main(){
    char string[];
    scanf("%s",string);
    int count=0;
    for(int i=0;i<100;i++){
        if(string[i]=='\0'){
            printf("%d",i);
            break;
        }
    }
    return 0;
}