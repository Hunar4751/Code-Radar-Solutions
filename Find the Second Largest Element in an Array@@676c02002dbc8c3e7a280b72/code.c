#include <stdio.h>

int main() {
    int n, h , b ;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    b=a[0];
    h = a[0];
    for (int i = 0 ; i <n;i++){
        if(a[i]>b){
            b=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(h<a[i] && h !=b){
            h=a[i];
        }
    }
    printf("%d",h);
    return 0;
}