#include <stdio.h>
int main(){
    int n,x,y;
    int count =100;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i =0;i<n;i++){
        for(int j =0 ; j<n;j++){
            if(i!=j){
                if(count>a[i]-a[j]){
                    x=a[i];
                    y=a[j];
                }
            }
        }
    }
    printf("%d %d",x,y);
    return 0;
}