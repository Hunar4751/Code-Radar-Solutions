#include <stdio.h>
int main(){
    int n,k,r=0,l=0,d,p=1;
    scanf("%d %d",&n,&k);
    while(n>0){
        
        if(l==k){
            d=~(n%2);
        }else{
            d=n%2;
        }
        r+=d*p;
        p*=2;
        n=n/2;
        l++;
    }
    printf("%d",r);
    return 0;
}