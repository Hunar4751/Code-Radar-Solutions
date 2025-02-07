#include <stdio.h>

int main() {
    int n ;
    int found;
    found = 0;
    scanf("%d",&n);
    int a[n];
    for(int i = 0 ;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(int i = 1; i<=n-2;i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            found = 1;
            break;
        }
     }
     

    return 0;
}