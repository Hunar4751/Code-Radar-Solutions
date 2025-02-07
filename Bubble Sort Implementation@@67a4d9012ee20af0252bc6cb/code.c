#include <stdio.h>
void bubbleSort(a[n],n){
    for(int i=0;i<n;i++){
        for (int j =i;j<n;j++){
            if(a[i]<a[j]){
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
    return a[n];
}
