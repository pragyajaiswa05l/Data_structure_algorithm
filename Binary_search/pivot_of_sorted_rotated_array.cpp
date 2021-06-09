#include<iostream>
using namespace std;
int findPivot(int *arr ,int n){
    int lo = 0;
    int hi = n-1;
    while(lo < hi){
        int mid = lo +(hi-lo)/2;
        if(arr[mid] <= arr[hi]){
            hi = mid;
        }
        else{
            lo = mid+1;
        }
    }
    return arr[lo];
}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int pivot_element = findPivot(arr,n);
    cout<<pivot_element<<endl;
}
