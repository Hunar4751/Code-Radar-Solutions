#include <stdio.h>
int main(){
    int n,k =0,c=1;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i =0 ; i <n; i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        c=1;
        for(int j=0;j<n;j++){
            if(i!=j && a[i]==a[j]&&a[i]!=b[j]){
                c+=1;
                b[k]=a[i];
                k++;
            }
        }
        printf("%d %d \n",a[i],c);
    }
    return 0;
}