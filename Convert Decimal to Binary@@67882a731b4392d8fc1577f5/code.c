#include <stdio.h>
int main(){
    int n,r[100],d=0;
    scanf("%d",&n);
    while(n>1){
        r[d]=n%2;
        n/=2;
        d++;
    }
    for(int i=d;i>=0;i--){
        printf("%d",r[i]);
    }
}