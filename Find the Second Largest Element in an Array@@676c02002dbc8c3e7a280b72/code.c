#include <stdio.h>

int main() {
    int n, h , b ;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    b=a[0];
    for (int i = 0 ; i <n;i++){
        if(a[i]>b){
            b=a[i];
        }
    }
    h = -789445;
    for(int i=0;i<n;i++){
        if(b!=a[i]){            
        if(h<a[i]){
            h=a[i];
        }}}
    printf("%d",h);
    return 0;
}