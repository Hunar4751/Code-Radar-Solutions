#include <stdio.h>
int main(){
    int n,k,x=0,y=0;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }scanf("%d",&k);
    for(int i =0;i<n;i++){
        for(int j =1+i;j<n;j++){
        if(k== a[i]+a[j]&& (x !=a[i] && y!=a[j])){
            x=a[i];
            y=a[j];
            printf("%d %d",a[i],a[j]);
            printf("\n");
        }    
        }
    }
return 0;
}
