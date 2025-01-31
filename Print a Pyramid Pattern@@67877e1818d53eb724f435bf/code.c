#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int j = 1;j<=a;j=j+2){

        for (int i = a-1;i>0;i--){
             printf(" ");
        }
        for (int k=1 ;k<=j;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}