#include <stdio.h>

int main() {
    int n ,k,d;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i<n;i++){
        scanf("%d",&a[i]);
    }k =a[0];
    d=k;
    for (int j = 0 ;j<n-1;j++){
        if(a[i]<k){
            k=a[i];
        }
    }
    for (int j = 0 ;j<n-1;j++){
        if(a[i]<k){
            k=a[i];
        }
    }
    for (int j = 0 ;j<n-1;j++){
        if(a[i]<d && k>a[i]){
            d=a[i];
        }
    }
    printf("%d",d);
    return 0;
}