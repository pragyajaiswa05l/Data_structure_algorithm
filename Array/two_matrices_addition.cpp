#include<iostream>
using namespace std;
int main(){
    //to add two matrices their order must be same
    int n,m;
    cin>>n>>m;
    int **a = new int* [n];
    for(int i = 0 ;i < n ;i++){
        a[i] = new int[m];
        for(int j = 0 ; j < m ; j++){
            cin>>a[i][j];
        }
    }
    int **b = new int*[n];
    for(int i = 0 ;i < n ;i++){
        b[i] = new int[m];
        for(int j = 0 ; j < m ; j++){
            cin>>b[i][j];
        }
    }
    int **c = new int*[n];
    for(int i = 0 ;i<n ;i++){
        c[i] = new int[m];
        for(int j = 0 ; j< m;j++){
            int sum = 0;
            sum = sum+a[i][j]+b[i][j];
            c[i][j] = sum;
        }
    }
    //print the sum
    for(int i = 0 ;i<n ;i++){
        for(int j = 0 ; j<m ;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }


}
