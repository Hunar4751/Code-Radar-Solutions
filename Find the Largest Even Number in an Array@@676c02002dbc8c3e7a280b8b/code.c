#include <stdio.h>
int main(){
    int n,k=-100 ;
    scanf("%d",&n);
    int a[n];
    for(int i =0 ; i <n; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0 ; i <n; i ++){
        if(a[i]%2==0 && a[i]>k){
            k=a[i];
        }
    }if(k==0){
        printf("-1");
        return 0 ;
    }
    printf("%d",k);
    return 0;
}