#include<iostream>
using namespace std;
int findfloor (int*arr,int n,int x){
    int start = 0;
    int end = n-1;
    int res = -1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid] == x){
            res = mid;
            return mid;
        }
        else if(arr[mid] > x){
            end = mid-1;
        }
        else if(arr[mid] < x){
            res= mid;
            start = mid+1;
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0 ; i < n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int floor = findfloor(arr,n,x);
    cout<<floor<<endl;
}
