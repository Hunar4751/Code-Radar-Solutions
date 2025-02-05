#include <stdio.h>

int main() {
    int n ;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        for (int j = 1;j<=n-i;j++){
            printf(" ");
        }
        for (int b = 1;b<=i;b++){
            printf("%d ",b);
        }
        printf("\n");
        }
    return 0;
}