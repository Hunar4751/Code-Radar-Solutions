#include <stdio.h>
int main(){
    int a,b,result;
    char c;
    scanf("%d %d",&a,&b);
    scanf(" %c",&c);
    if(c=='+'){
         result = a + b;
    }else if(c=='-'){
         result = a - b;
    }else if(c=='*'){
         result = a *b;
    }else{
        if(b!=0){
         result = a/ b;}
         else{
        printf("error");
        return 0;
    }
    }
    printf("%d",result);
    return 0;
}