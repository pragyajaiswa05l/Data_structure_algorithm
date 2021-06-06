#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int **arr = new int*[n];
    for(int i = 0 ; i < n; i++){
        arr[i] = new int[m];
        for(int j = 0 ; j <m ;j++){
            cin>>arr[i][j];
        }
    }
    int x ;
    cin>>x;
    int max = INT_MIN;
    int j = m-1;
    for(int i = 0 ;i < n; ){
        if(arr[i][j] < x){
           i++;
        }
        else if(arr[i][j]==x){
            cout<<"found at index "<<i<<" "<<j<<endl;
            return 0;
        }
        else{
            j--;
        }
    }
    cout<<"Not found"<<endl;
}
