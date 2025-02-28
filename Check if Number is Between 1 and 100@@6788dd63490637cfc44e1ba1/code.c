#include <stdio.h>
int main (){
    int n ;
    scanf("%d",&n);
    for(int i =1;i<101;i++){
        if(i==n){
            printf("In Range");
            return 0;
        }
    }
    printf("Out of Range");
    return 0;
}