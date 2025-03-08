#include <stdio.h>
int main(){
    int n,k,c=0;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i =0;i<n;i++){
        if(a[i]>k){
            c+=1;
        }
    }printf("%d",c);
    return 0;
}