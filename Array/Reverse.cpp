#include<iostream>
using namespace std;
void reverse(int *a,int n){
    int i = 0;
    int j = n-1;
    for(;i < j ; i++,j--){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    return;
}

int main(){
    int n;
    cin>>n;
    int *a = new int[n];
    for(int i = 0 ; i < n;i++){
        cin>>a[i];
    }
    reverse(a,n);
    for(int i = 0 ; i < n;i++){
        cout<<a[i]<<" ";
    }
}
