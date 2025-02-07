#include <stdio.h>

int main() {
    int e , o , n ;
    e = 0;
    o = 0;
    scanf("%d",&n);
    int a[n];
    for(int  i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int j = 0; j <n;j++){
        if(a[j]%2 == 0){
            e+=1;
        }else{
            o+=1;
        }
    }
printf("%d %d",e,o);
    return 0;
}