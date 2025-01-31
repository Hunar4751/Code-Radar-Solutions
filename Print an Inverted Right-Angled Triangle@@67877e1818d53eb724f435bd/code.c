#include <stdio.h>

int main() {
    int n ;
    scanf("%d",&n);
    for (int j = n;j>0;j--){
    for (int i = n ;i>0;i--){
        printf("*");
    }
    printf("\n")
    }
    return 0;
}