#include <stdio.h>
int main(){
    int n,k,r=0,d,l=0;
    scanf("%d %d",&n,&k);
    while(n>0){
        d=n%2;
        if(l==k){
            r=r*10;
            continue;
        }else{
        r=r*10+d;

        }
        n=n/2;
        l++;
    }
    l=1;
    n=0;
    while(n>0){
        d=r%2;
        n=n*10+d*l;
        r=n/2;
        l*=2;
    }
    printf("%d",n);
    return 0;
}