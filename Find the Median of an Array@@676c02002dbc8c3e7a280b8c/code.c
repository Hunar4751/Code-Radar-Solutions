#include <stdio.h>
int main(){
    int n,k,s;
    scanf("%d",&n);
    int a[n];
    for(int i =0 ; i <n; i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i ++){
        for (int j =i+1;j<n;j++){
            if(a[i]>a[j]){
                k = a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
    if(n%2==0){
        s= (a[n/2]+a[n/2+1])/2;
    }else{
        s=a[n/2];
    }printf("%d",s);
    return 0;
}