bool findPair(int arr[], int size, int n){
    //code
    sort(arr,arr+size);
    for(int i = 0 , j =1 ;  j < size ;){
        if(arr[j] - arr[i] == n){
            return true;
        }
        else if((arr[j] - arr[i]) < n){
            j++;
        }
        else{
            i++;
        }
    }
    return false;

}
