#include <stdio.h>

int main() {
    int n ;
    int k ;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i<n;i++){
        scanf("%d",a[i]);
    }
    for (int j = 0 ;j<n-1;j++){
        if(a[j]>a[j+1]){
            k=1;
        }
    }
    if(k==1){
        printf("Not Sorted");
    }else{
        printf("Sorted");
    }
    return 0;
}