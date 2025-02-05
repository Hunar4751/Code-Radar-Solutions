#include <stdio.h>

int main() {
    int n ;
    int k ;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        k=0;
        for (int j = 1;j<=n-i;j++){
            printf(" ");
        }
        for (int b = 1;b<=i;b++){
            printf("%d",b);
            k=b;
        }
        for (int a = k;a>0;a++){
            printf("%d",a);
        }

        printf("\n");
    }
    return 0;
}