#include <stdio.h>
int main(){
    int nk;
    scanf("%d",&n);
    int a[n];
    for(int i =0 ; i <n; i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i ++){
        for (int j =i+1;j<n;j++){
            k=0;
            if(a[i]>=a[j]){
               k=1;
            }
            printf("%d",k);
        }
    }
    return 0;
}