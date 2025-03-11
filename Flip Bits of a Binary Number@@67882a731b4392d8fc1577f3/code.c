#include <stdio.h>
int main(){
    int n,k,r=0,l=0,d,p=1;
    scanf("%d",&n);
    while(n>0||l<=k){
        d=n%2;
        k=~d;
        r+=k*p;
        p*=2;
        n=n/2;
        l++;
    }
    printf("%d",r);
    return 0;
}