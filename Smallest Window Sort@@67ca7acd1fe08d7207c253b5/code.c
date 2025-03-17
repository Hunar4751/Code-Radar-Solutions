int findUnsortedSubarray(int arr[],int n){
    int c=0;
    int k[n];
    for(int i=0;i<n;i++){
        k[i]=arr[i];
    }
    int t;
    for(int i =0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(arr[i]>arr[j]){
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=k[i]){
            c++;}}
    return c;
}