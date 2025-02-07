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
        if(found == 1){
        printf("%d",a[i]);
     }else{
        printf("-1");
     }
     }
     

    return 0;
}