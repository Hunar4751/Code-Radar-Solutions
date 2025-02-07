#include <stdio.h>

int main() {
    int n,h,l;
    scanf("%d",&n);
    int a[n];
    for (int i = 0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    h = a[0];
    l=a[0];
    for(i = 0 ; i<n ; i++){
        if(a[i]>h){
            h = a[i];
        }
        if(a[i]<l){
            l = a[i];
        }
    }

    // printf("%d %d",l,h);
    return 0;
}