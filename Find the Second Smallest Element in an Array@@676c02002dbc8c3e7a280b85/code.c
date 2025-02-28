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
        if(a[j]<k){
            k=a[j];
        }
    }
    for (int j = 0 ;j<n-1;j++){
        if(a[j]<d && k>a[j]){
            d=a[j];
        }
    }
    printf("%d",d);
    return 0;
}