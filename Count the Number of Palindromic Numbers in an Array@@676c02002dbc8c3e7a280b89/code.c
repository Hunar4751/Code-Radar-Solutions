#include <stdio.h>

int length(int num){
    while(num>0){
    return 1+length(num/10);}
}

int chkpalindrome(int num,int end){
    int start = 0;
    while (start<end){
        if(num[start]!=num[end]){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
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
    printf("%d",k)
    return 0;
}