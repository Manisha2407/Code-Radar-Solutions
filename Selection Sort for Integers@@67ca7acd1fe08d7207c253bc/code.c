int selectionSort(int arr[],int n){
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp;
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        }
    }
return 0;
}
int printArray(int arr[]){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
        return 0;
    }
}