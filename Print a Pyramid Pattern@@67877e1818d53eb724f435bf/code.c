#include <stdio.h>

int main() {
    int a;
    int t = 1;
    scanf("%d",&a);
    for(int j = 1;j<=a;j++){

        for (int i = a-1;i>0;i--){
             printf(" ");
        }
        for (int k=1 ;k<=t;k++){
            printf("*");
        }
t+=2;
        printf("\n");
    }
    return 0;
}
