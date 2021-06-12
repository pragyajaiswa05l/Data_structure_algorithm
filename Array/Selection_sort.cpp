#include<iostream>
using namespace std;
void selectionSort(int *arr , int n){
    for(int i = 0 ; i < n-1 ; i++){
        //find min element in the array
        int min = arr[i];
        int minindex = i;
        for(int  j = i+1; j < n ; j++){
            if(arr[j] < min ){
                min = arr[j];
                minindex = j;
            }
        }
        //swap
        int temp = arr[minindex];
        arr[minindex] = arr[i];
        arr[i] = temp;
    }
    return ;
}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
