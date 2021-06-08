#include<iostream>
#include<vector>
using namespace std;
int firstOccurence(int *arr,int n ,int x){
    int start = 0 ;
    int end = n-1;
    int res_first =-1;
    while(start <= end){
        int mid = start+(end-start)/2;
        if(arr[mid] == x){
            res_first = mid;
            end = mid-1;
        }
        else if(arr[mid] > x){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return res_first;
}
int lastOccurence (int *arr,int n,int x){
    int start = 0 ;
    int end = n-1;
    int res_last =-1;
    while(start <= end){
        int mid = start+(end-start)/2;
        if(arr[mid] == x){
            res_last = mid;
            start = mid+1;
        }
        else if(arr[mid] > x){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return res_last;
}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0 ; i <n ;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    vector<int>v;
    int res_first = firstOccurence(arr,n,x);
    int res_last = lastOccurence(arr,n,x);
    v.push_back(res_first);
    v.push_back(res_last);
    for(int  i = 0 ; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
