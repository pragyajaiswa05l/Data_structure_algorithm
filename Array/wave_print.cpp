#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int **a = new int*[n];
    for(int i = 0 ;i < n; i++){
        a[i] = new int[m];
        for(int j = 0 ; j<m ;j++){
            cin>>a[i][j];
        }
    }
    //move column_wise
    for(int i = 0 ;i< m; i++){
        if(i%2 == 0){
            for(int j = 0 ; j< n; j++){
                cout<<a[j][i]<<" ";
            }
        }
        else{
            for(int j = n-1 ; j>=0 ;j--){
                cout<<a[j][i]<<" ";
            }
        }
    }
    cout<<endl;

}
