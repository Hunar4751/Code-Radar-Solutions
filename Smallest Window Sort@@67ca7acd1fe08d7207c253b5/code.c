int bubbleSort(int arr[],int n){
    int t;
    for(int i =0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(arr[i]>arr[j]){
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=arr[i];
            }
        }
    }
    return arr[n];
}

int findUnsortedSubarray(int arr[],int n){
    int t=0;
    int k[]=bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        if(arr[i]!=k[i]){
            t++;}}
    return t;
}