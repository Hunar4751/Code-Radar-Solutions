#include <stdio.h>

int main() {
    int n,f ;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i =1;i<500;i++){
        f=0;
        for(int j=0;j<n;j++){
            if(i == a[j]){
                f=1;
            }
        }
        if(f == 0){
            printf("%d",i);
        }
    }
    return 0;
}