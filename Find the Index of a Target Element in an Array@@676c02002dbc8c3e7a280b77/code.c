#include <stdio.h>

int main() {
    int f,n,k;
    f=0;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(int i =0;i<n;i++){
        if(a[i]==k){
            printf("%d",i);
            f = 1;
            break;
        }}
     if(f==0){
            printf("-1");
        }
    return 0;
}