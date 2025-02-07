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
    for(int i =0;i<n;){
        if(a[i]==k){
            printf("%d",a[i]);
            f = 1;
            
            break;
        }i++;}
     if(f==0){
            printf("-1");
        }
    return 0;
}