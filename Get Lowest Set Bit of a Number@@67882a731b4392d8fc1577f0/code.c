#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
   for(int i=0;i<3*n;n=n/2){
    if(n%2==1){
        printf("%d",i);
        break;
    }i++;
   }
    return 0;
}