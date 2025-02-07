#include <stdio.h>

int main() {
    int f,n,k;
    f=0;
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(int i =0;i<mn;i++){
        if(a[i]==k){
            printf("%d",i);
            break;
        }else{
            printf("-1");
        }
    }
    return 0;
}