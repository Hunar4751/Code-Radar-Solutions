#include <stdio.h>
int main(){
    int n,r=0,d,p=1;
    scanf("%d",&n);
   for(int i=0;i<n;n=n/2){
   
    d=(n%2)^1;
    r+=d*p;
    p*=2;
   }printf("%d",r);
    return 0;
}