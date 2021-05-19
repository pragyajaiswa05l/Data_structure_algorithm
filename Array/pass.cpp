#include<iostream>
using namespace std;

void fun(int *a , int n){
  int sum =0;
    for(int i = 0;i<n;i++){
        sum += a[i];
    }
    cout<<"fun function "<<sum<<endl;
    cout<<a<<endl;
    cout<<&a[1]<<endl;
}


int main(){
    int n;
    cin>>n;
    int *arr = new int [n];
    for(int i =0;i<n ;i++){
        cin>>arr[i];
    }
    int sum =0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    cout<<"Main function "<<sum<<endl;
    cout<<arr<<endl;
    cout<<&arr[1]<<endl;
    fun(arr,n);

}
