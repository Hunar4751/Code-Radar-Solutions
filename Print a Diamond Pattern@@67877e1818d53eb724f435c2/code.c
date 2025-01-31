#include <stdio.h>

int main() {
    int n;
    int t= 1;
    scanf("%d",&n);
    for (int i = 1 ; i<=n;i++){
        for (int j = 1;j<=n-i;j++){
            printf(" ");
        }
        for (int k =1;k<=t;k++){
            printf("*");
        }
        t+=2;
        printf("\n");
    }

    for (int a = n-1;a>0;a--){
        t-=4;
        for(int b =n-1-a;b>0;b--){
            printf(" ");
        }
        for (int c =1;c<=t;c++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}