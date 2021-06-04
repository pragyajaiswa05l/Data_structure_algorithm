#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i = 0 ;i < n ;i++){
        for(int j = 0 ; j< m ; j++){
            cin>>a[i][j];
        }
    }
    int max_sum_row = INT_MIN;

    int rowindex ;
    for(int i = 0 ;i< n;i++){
        int sum_row = 0 ;
        for(int j = 0 ; j< m; j++){
            sum_row = sum_row +a[i][j];
        }
        if(sum_row > max_sum_row){
            max_sum_row = sum_row;
            rowindex = i;
        }
    }
    int max_sum_col = INT_MIN;

    int colindex ;
    for(int i = 0 ;i<m ;i++){
        int sum_col = 0 ;
        for(int j = 0 ;j<n ;j++){
            sum_col = sum_col +a[j][i];
        }
        if(sum_col > max_sum_col){
            max_sum_col = sum_col;
            colindex = i;
        }
    }
    if(max_sum_row >= max_sum_col){
        cout<<"Row"<<" "<<rowindex<<" "<<max_sum_row<<endl;
    }
    else{
        cout<<"Column"<<" "<<colindex<<" "<<max_sum_col<<endl;
    }
}
