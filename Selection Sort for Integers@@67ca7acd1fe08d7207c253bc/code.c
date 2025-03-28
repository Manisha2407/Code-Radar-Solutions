int selectionSort(int arr[],int n){
    
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            int temp;
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
return 0;
}