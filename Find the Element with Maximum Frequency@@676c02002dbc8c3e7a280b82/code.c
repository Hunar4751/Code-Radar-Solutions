#include <stdio.h>
int main(){
    int n,count =0,k=0,x;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(a[i]==a[j]){
                k+=1;
            }
            if(count<k){
                count = k;
                x=a[i];
            }else if(count ==k && x>a[i]){
                x=a[i];
            }
        }
    }printf("%d",x);
return 0;
}
