#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(abs(a+b) > abs(a)){
        printf("Same Sign");
    }else{
        printf("Different Sign");
    }
}