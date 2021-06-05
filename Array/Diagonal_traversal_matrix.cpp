#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int **arr = new int*[n];
    for(int i = 0 ; i < n; i++){
        arr[i] = new int[n];
        for(int j = 0 ; j < n ;j++){
            cin>>arr[i][j];
        }
    }
    for(int g = 0 ; g<n ; g++){
        for(int i = 0 ,j = g ; j<n; i++,j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
