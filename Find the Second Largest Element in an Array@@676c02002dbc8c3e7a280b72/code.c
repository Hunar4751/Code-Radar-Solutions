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
    h =-789456;
    for(int i=0;i<n;i++){
        if(h<a[i] && a[i]!=b){
            h=a[i];
        }
    }
    if(h == -789456){
        printf("-1");
    }else{        
    printf("%d",h);
    }
    return 0;
}