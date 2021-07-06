class Solution{

    vector<long long>  merge2sortedarray(vector<long long >&left ,vector<long long >&right,long long int&count){
    long long  i=0;
    long long  j = 0;
    vector<long long> temp;

    while(i <left.size() && j < right.size()){
        if(left[i] <= right[j]){
            temp.push_back(left[i]);
            i++;
        }
        else{
            count += (left.size() -i);
            temp.push_back(right[j]);
            j++;
        }
    }
    while(i < left.size()){
        temp.push_back(left[i]);
            i++;
    }
    while( j < right.size()){
        temp.push_back(right[j]);
            j++;
    }
    return temp;
}


    vector<long long>  mergesort(long long *arr, long long low,long long high,long long int &count ){
    if(low == high){
        vector<long long> bas = {arr[low]};
        return bas;
    }
    long long   mid = low+(high-low)/2;
   vector<long long  > left = mergesort(arr,low,mid,count);
    vector<long long > right = mergesort(arr,mid+1,high,count);
    vector<long long > merged = merge2sortedarray(left,right,count);
    return merged;
}
  public:
    long long int inversionCount(long long arr[], long long N)
    {

        long long int count = 0;
        mergesort(arr,0,N-1,count);
        return count;
    }


};
