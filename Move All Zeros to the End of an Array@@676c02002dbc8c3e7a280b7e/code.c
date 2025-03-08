#include <stdio.h>
int main(){
    int n,k =0;
    scanf("%d",&n);
    int a[n];
    for(int i =0 ; i <n; i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        if(a[i]!=0){
            a[k]=a[i];
            k++;
        }        
    }
    for(int i=k+1;i<n;i++){
        a[i]=0;
    }
    for(int i =0 ; i <n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}