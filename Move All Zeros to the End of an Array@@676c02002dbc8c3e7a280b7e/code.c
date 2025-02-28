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
            for(int j = i;j<n-1;j++){
                a[j] = a[j+1];
            }
            a[n-1] = 0;
            i--;
        }
    }
    for(int i =0 ; i <n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}