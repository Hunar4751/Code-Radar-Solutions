#include <stdio.h>
int main(){
    int n,x,y,k;
    int count =1000;
    scanf("%d",&n);


    if (n ==1){
    printf("-1");
    return 0;}

    int a[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }


    for (int i =0;i<n;i++){
        for(int j =0 ; j<n;j++){
            if(i!=j){
                k =a[i]-a[j];
                if(k<0){
                    k=k*-1;
                }
                if(count>k){
                    count = k;
                    x=a[i];
                    y=a[j];
                }
            }
        }
    }
    printf("%d %d",x,y);
    return 0;
}