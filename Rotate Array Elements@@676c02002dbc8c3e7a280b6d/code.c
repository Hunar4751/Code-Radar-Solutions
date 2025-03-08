#include <stdio.h>

int main() {
    int n , k ;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i  = 0 ;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(int i = 0 ; i <n;i++){
        b[i] = a[(i+k)%n];
        }
        
 
    for(int i = 0 ;i<n;i++){
        printf("%d\n",b[i]);
    }
    return 0;
}