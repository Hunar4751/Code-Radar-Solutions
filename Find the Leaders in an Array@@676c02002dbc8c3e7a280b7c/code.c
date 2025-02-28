#include <stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int a[n];
    for(int i =0 ; i <n; i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i ++){
        k=1;
        for (int j =i+1;j<n;j++){
            if(a[i]<a[j]){
               k=0;
               break;
            }
        }
        if(k==1){
             printf("%d ",a[i]);

        }
    }
    return 0;
}