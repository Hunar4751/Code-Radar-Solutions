#include <stdio.h>
int main(){
    int n,r=0,p=1;
    scanf("%d",&n);
   for(int i=0;i<n;n=n/2){
    // if(n%2==1){
    //     printf("%d",r);
    //     break;
    // }r++;
    d=(n%2)^1;
    r+=d*p;
    p*=2;
   }
    return 0;
}