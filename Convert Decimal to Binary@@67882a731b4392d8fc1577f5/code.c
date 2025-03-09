#include <stdio.h>
int main(){
    int n,r[100],d=0;
    scanf("%d",&n);
    if(r[0]==0){
        printf("0");
        return 0;
    }
    while(n>0){
        r[d]=n%2;
        n/=2;
        d++;
    }
    for(int i=d-1;i>=0;i--){
        printf("%d",r[i]);
    }
}