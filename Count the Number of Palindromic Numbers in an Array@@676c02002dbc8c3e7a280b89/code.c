#include <stdio.h>

int chkpalindrome(int num){
    int d,rev=0;
    while(num>0){
        d=num%10;
        rev=rev*10+d;
        num/=10;
    }
    if(num==rev){
        return 1;
    }else{
        return 0;
    }

}
int main(){
    int n,k=0;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i =0;i<n;i++){
        k+=chkpalindrome(arr);
    }
    printf("%d",k);
    return 0;
}