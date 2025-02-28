#include <stdio.h>
int main(){
    int n,x;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for( int i =0;i<n;i++){
        int k=0;
        for(int j =0;j<n;j++){
            if(a[i]==a[j]){
                k+=1;
            }
        }
        if(n/2 <k){
                        x=a[i];
        }else if(n/2== k && x!=a[i]){
            x=-1;
        }
        }
        printf("%d",x);
    return 0;
}