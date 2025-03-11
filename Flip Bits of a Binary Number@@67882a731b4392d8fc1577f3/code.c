#include <stdio.h>
int main(){
    int n,r=0,d,p=1;
    scanf("%d",&n);
     int is_negative = 0;
    if (n < 0) {
        is_negative = 1;
        n = ~(-n); 
    }
    while(n>0){
        d=(n%2)^1;
        r+=d*p;
        p*=2;
        n=n/2;
    }
    if (is_negative) {
        r = ~r; 
    }
    printf("%d",r);
    return 0;
}