#include <stdio.h>

int main() {
    int n,c=0,nprime;
    scanf("%d",&n);
    int a[n];
    for(int i = 0 ; i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]>1){
        nprime=0;
        for(int j = a[i]-1;j>1;j--){
            if(a[i]%j==0){
                nprime=1;
                break;
        }
        }
        }else{
            nprime=1;
        }
        if(nprime==0){
            c+=1;
        }
    }
    printf("%d",c);
    return 0;
}