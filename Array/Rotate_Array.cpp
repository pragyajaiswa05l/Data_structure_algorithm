#include<iostream>
using namespace std;
void reverse(int *arr,int i,int j){
    for( ; i < j ; i++ , j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void rotate(int *arr ,int n, int d){
    reverse(arr,0,n-1);
    reverse(arr,0,n-d-1);
    reverse(arr,n-d,n-1);
}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0 ;i < n ; i++){
        cin>>arr[i];
    }
    int d ;
    cin>>d;
    if(d>=n && n!=0){
        d= d%n;
    }
    if(n == 0){
        return;
     }
    rotate(arr,n,d);

    for(int i =0 ;i< n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
