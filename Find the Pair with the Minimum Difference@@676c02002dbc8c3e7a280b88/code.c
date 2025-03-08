#include <stdio.h>
int main(){
    int n,x,y,k,a=-1000,b=-1000;
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
                }else if(count==k){
                    a=a[i];
                    b=a[j];
                }
            }
        }
    }
    if(x>a){
    if(x<y)
    printf("%d %d",x,y);
    else
    printf("%d %d",y,x);}
    else{
     if(a<b)
    printf("%d %d",a,b);
    else
    printf("%d %d",b,a);}   
    }
    return 0;
}