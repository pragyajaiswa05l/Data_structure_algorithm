#include<iostream>
using namespace std;

void swapAlternate(int *a ,int n){
    for(int i = 0; i < n-2 ; i=i+2){
        int temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    int *a = new int[n];
    for(int i = 0;i < n ; i++){
        cin>>a[i];
    }
    swapAlternate(a,n);
    for(int i = 0; i<n ;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
