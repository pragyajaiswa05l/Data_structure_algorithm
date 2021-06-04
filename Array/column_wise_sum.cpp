#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i = 0 ;i < m ; i++){
            int sum = 0;
        for(int j = 0 ;j< n ;j++){
            cin>>a[j][i];
           sum = sum+a[j][i];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
