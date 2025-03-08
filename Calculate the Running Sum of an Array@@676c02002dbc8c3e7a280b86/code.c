#include <stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
   
    int a[n],b[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i =0;i<n;i++){
        k=0;
       for(int j=0;j<=i;j++){
        k+=a[j];
       }
       b[i]=k;
    }
    for(int i = 0;i<n;i++){
        scanf("%d ",&b[i]);
    }
    
    return 0;
}