#include <stdio.h>

int main() {
    int n,c,p,d;
    p=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n ;i++){
        scanf("%d",&a[i]);
    }
    for(int i =0;i<n;i++){
        c=0;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                c+=1;
            }
        }
        if(c>p){
            p=c;
            d=a[i];
        // }else if(c==p){
            if(d>a[i]{
                d=a[i];
            })
        }
    }
    printf("%d",d);
    return 0;
}