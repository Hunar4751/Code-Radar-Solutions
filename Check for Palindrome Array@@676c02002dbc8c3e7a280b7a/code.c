#include <stdio.h>

int main() {
    int n,i,j;
    scanf("%d",&n);
    int a[n],b[n];
    for(int p=0;p<n;p++){
        scanf("%d",&a[p]);
    }
    i = 0;
    j = n-1;
    while(i<n,j>=0){
        b[j] = a[i];
        j--;
        i++;
    }
    for(int d =0;d<n;d++){
        if(a[d]!=b[d]){
            printf("NO");
            return 0;
        }
        
   }
   printf("YES");
    return 0;
}