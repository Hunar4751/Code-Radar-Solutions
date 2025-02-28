#include <stdio.h>
int main(){
    int n,k,s=0;
    scanf("%d",&n);
    scanf("%d",&k)
    int a[n];
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    };
    for(int i =0;i<n;i++){
        if(a[i]==k){
            s+=1;
        }
    }printf("%d",s);
return 0;
}
