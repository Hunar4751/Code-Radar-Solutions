#include <stdio.h>

int main() {
    int n,k;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)    {
        for (int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(a[0]!=a[i]){
            printf("%d",a[i]);
            return 0;
        }
    }printf("-1");
    return 0;
}