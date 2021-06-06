#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int **arr = new int*[n];
    for(int i = 0 ; i < n ;i++){
        arr[i] = new int[m];
        for(int j = 0 ; j < m ;j++){
            cin>>arr[i][j];
        }
    }
    //traverse row
    for(int i = 0; i < n ;i++){
        int smallest_value_j = 0;
        //find the column which has smallest value element in a row;
        for(int j = 1 ; j < m ;j++){
            if(arr[i][j] < arr[i][smallest_value_j]){
                smallest_value_j = j;
            }
        }
        //traverse the smallest value j column
        bool flag = true;
        for(int k = 0 ; k<n ;k++){
            if(arr[k][smallest_value_j] > arr[i][smallest_value_j]){
                flag = false;
                break;
            }
        }
        if(flag == true){
            cout<<arr[i][smallest_value_j]<<endl;
            return 0;
        }
    }
    cout<<"INVALID INPUT"<<endl;
}
