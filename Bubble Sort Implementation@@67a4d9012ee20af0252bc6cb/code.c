
void bubbleSort(int a[n],int n){
    for(int i=0;i<n;i++){
        for (int j =i;j<n;j++){
            if(a[i]>a[j]){
                int k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
}
void printArray(int a[n],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
