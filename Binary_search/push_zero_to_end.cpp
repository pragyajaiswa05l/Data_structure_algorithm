#include<iostream>
using namespace std;
void pushZeroToEnd(int *arr ,int n){
    int k = 0 ;
    for(int i = 0 ; i < n ;i++){
        if(arr[i] !=0){
            int temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
            k++;
        }
    }
    return;
}
 int main(){
     int n;
     cin>>n;
     int *arr = new int[n];
     for(int i = 0 ; i < n; i++){
        cin>>arr[i];
     }
     pushZeroToEnd(arr,n);
     for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
 }
