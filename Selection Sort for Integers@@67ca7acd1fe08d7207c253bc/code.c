void selectionSort(int arr[],int n){
    int t;
    for(int i=0;i<n+1;i++){
        for(int j=1+i;j<n;j++){
          if(arr[i]>arr[j]){
            t=arr[i];
            arr[i]=arr[j];
            arr[j] = t;
          } 
        }
    }   
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}