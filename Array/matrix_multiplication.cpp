#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int **a = new int*[n];
    for(int i = 0 ; i <n ;i++){
        a[i] = new int[m];
        for(int j = 0 ; j< m;j++){
            cin>>a[i][j];
        }
    }
    int k,l;
    cin>>k>>l;
    int **b = new int*[k];
    for(int i = 0 ;i<k;i++){
        b[i] = new int[l];
        for(int j = 0 ;j<l;j++){
            cin>>b[i][j];
        }
    }
    if(m != k){
        cout<<"Invalid"<<endl;
        return 0;
    }
    else{
        int **c = new int*[n];
        for(int i = 0 ;i <n;i++){
            c[i] = new int[l];
            for(int j = 0 ;j<l;j++){
                c[i][j] = a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j];
            }
        }

        //print the matric c
        for(int i = 0 ;i<n;i++){
            for(int j = 0; j<l;j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }


    }
}
