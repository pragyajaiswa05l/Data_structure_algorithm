#include<iostream>
using namespace std;
int duplicateNum(int *a ,int n){
    int sum = 0;
    for(int i =0;i<n;i++){
        sum+=a[i];
    }
    int nElementSum = ((n-2)*(n-1))/2;
    int diff = sum -nElementSum;
    return diff;
}

int main(){
    int n;
    cin>>n;
    int *a = new int[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int dup = duplicateNum(a,n);
    cout<< dup<<endl;
}
