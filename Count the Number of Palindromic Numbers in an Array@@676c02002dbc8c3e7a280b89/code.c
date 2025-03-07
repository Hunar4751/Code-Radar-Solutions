#include <stdio.h>

int length(int num){
    while(num>0){
    return 1+length(num/10);}
}

int chkpalindrome(int num,int end){
    int start = 0;
}
int main(){
    int n,l,k=0;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    for(int i =0;i<n;i++){
        l=length(arr[i]);
        k+=chkpalindrome(arr,l);
    }
    return 0;
}