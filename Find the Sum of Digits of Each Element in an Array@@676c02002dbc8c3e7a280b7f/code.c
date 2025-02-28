#include <stdio.h>
int main(){
    int n,k,d,sum;
    scanf("%d",&n);
    int a[n];
    for(int i =0 ; i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i =0 ;i<n;i++){
        k = a[i];
        sum =0;
        while(k!=0){
        d= k%10;
        sum +=d;
        k = k/10;
        }
        printf("%d ",sum);
    }
    return 0 ;
}