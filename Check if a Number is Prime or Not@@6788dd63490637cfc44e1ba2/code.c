#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n<=1){
        printf("Not Prime");
        return 0;
    }else if(n==2){
        printf("Prime");
        return 0;
    }else{
        for(int i  = 2 ;i=n/2;i++ ){
            if(i%n==0){
                printf("Not Prime");
                return 0;
            }
        }
    }printf("Prime");
    return 0;
}