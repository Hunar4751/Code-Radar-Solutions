#include <stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    int a[n];
    for(int i =0 ; i <n; i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i ++){
        if(a[i]==0){
            for(int k=0;k<n-1;k++){
                for(int j = i;j<n-k-1;j++){
                a[j] = a[j+1];
            }
            }
            a[n-1] = 0;
        }
    }
    for(int i =0 ; i <n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}