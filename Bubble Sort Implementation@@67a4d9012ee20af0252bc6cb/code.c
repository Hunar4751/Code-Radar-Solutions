#include <stdio.h>
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for (int j =i;j<n;j++){
            if(arr[i]>arr[j]){
                int k=arr[i];
                arr[i]=arr[j];
                arr[j]=k;
            }
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
