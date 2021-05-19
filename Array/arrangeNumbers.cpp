#include<iostream>
using namespace std;

void arrange(int *a , int n){
    int val =1;
    int i =0;
    int j = n-1;
    while(i<=j){
        if(i == j){
            a[i] = val;
            break;
        }
        a[i] = val;
        val++;
        i++;
        a[j] = val;
        val++;
        j--;
    }
}

int main(){
    int n;
    cin>>n;
    int *a = new int [n];
    arrange(a,n);
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
