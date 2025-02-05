#include <stdio.h>

int main() {
    int n ;
    int k ;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        for (int j = 1;j<=n-i;j++){
            printf(" ");
        }
        for (int j = 1;j<=i;j++){
            printf("%d",j);
            k=j;
        }
        // for (int a = k;a>0;a++){
        //     printf("%d",a);
        // }

        printf("\n");
    }
    return 0;
}