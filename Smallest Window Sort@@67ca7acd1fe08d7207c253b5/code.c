int findUnsortedSubarray(int arr[],int n){
    int c=0, start=-1,end=-1;
    int k[n];
    for(int i=0;i<n;i++){
        k[i]=arr[i];
    }
    int t;
    for(int i =0;i<n-1;i++){
        for(int j=1+i;j<n;j++){
            if(arr[i]>arr[j]){
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=k[i]){
            if(start==-1){
                start = i;
            }end =i;
                    }}
    if(start == -1){
        return 0;
    }return end-start+1;
}