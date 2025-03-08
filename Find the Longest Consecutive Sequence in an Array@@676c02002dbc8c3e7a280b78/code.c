#include <stdio.h>

int main() {
    int n,c=1,p=1,k;
    scanf("%d",&n);
    int b[n];
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                k = a[j];
                a[j]=a[j+1];
                a[j+1]=k;
            }
        }
    


        for(int j=0;j<n-1;j++){
            if(a[j+1]==a[j]+1){
                c++;   
            }else{
                c=1;
            }
            if(p<c){
                p=c;
            }
    }
    printf("%d",p);
    return 0;
}