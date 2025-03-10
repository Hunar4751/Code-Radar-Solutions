#include <stdio.h>
int main(){
    int n,k,r;
    scanf("%d %d",&n,&k);
    for(int i =0;i<n*2;i++){
        r=n%2;
        n=n/2;
        if(i==k){
            printf("%d",r);
            break;
        }

    }
    return 0;
}