#include <stdio.h>

int main() {
    int n ,found ;
    found = 0;
    scanf("%d",&n);
    int a[n];
    for(int i = 0 ;i<n;i++){
        scanf("%d",&a[i]);
    }

    if(a[0]>a[1]){
        printf("%d",a[0]);
    }
    
    for(int i = 1; i<=n-2;i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            printf("%d",a[i]);
            found = 1;
            break;
        }}

    if(!found && a[n]>a[n-1]){
        printf("%d",a[n]);
    }
     if (found==0){
        printf("-1");
     }

    return 0;
}