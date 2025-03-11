#include <stdio.h>
int main(){
    int n,r=0;
    scanf("%d",&n);
   for(int i=0;i<3n;n=n/2){
    if(n%2==1){
        printf("%d",i);
        break;
    }i++;
   }
    return 0;
}