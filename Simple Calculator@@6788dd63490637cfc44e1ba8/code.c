#include <stdio.h>
int main(){
    int a,b,result;
    char c;
    scanf("%d %d",&a,&b);
    scanf("%c",&c);
    if(c=='+'){
         result = a + b;
    }else if(c=='-'){
         result = a - b;
    }else if(c=='*'){
         result = a *b;
    }else{
         result = a/ b;
    }
    printf("%d",result);
    return 0;
}