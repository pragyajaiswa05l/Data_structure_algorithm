#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ** arr = new char*[n];
    for(int i = 0 ;i<n ;i++){
        arr[i] = new char[n];
        for(int  j = 0 ;j<n; j++){
            cin>>arr[i][j];
        }
    }
    //transpose
    for(int i = 0 ;i < n; i++){
        for(int j = i ; j<n; j++){
            char temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    //reverse column
    for(int i = 0 ; i < n ;i++){
        int left_index = 0;
        int right_index = n-1;
        while(left_index < right_index){
            char temp = arr[i][left_index];
            arr[i][left_index] = arr[i][right_index];
            arr[i][right_index] = temp ;
            left_index++;
            right_index--;
        }
    }
    //display
    for(int i = 0 ; i <n; i++){
        for(int j = 0 ; j<n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
