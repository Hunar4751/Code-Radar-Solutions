#include <stdio.h>

int main() {
    int n,c=0,p=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",a[i]);
    }
        for(int j=0;j<n-1;j++){
            if(a[j]=a[j]+1){
                c+=1;   
            }else{
                c=0;
            }
            if(p<c){
                p=c;
            }

        
    }
    printf("%d",p);
    return 0;
}