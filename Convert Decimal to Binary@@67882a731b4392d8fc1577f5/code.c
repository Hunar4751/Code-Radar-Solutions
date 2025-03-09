#include <stdio.h>
int main(){
    int n,r[100],d=0;
    scanf("%d",&n);
    while(n>0){
        r[d]=n%2;
        n/=2;
        d++;
    }
    for(int i=d-1;i>=0;i--){
        printf("%d",r[i]);
    }
}