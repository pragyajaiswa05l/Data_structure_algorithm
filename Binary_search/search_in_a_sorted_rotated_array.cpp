#include<iostream>
using namespace std;
int Search(int *arr, int n,int x){
    int start = 0 ;
    int end = n-1;
    while(start <= end){
        int mid = start+(end-start)/2;
        if(arr[mid] == x){
            return mid;
        }
        //left side is sorted
        else if(arr[start] <= arr[mid]){
            if(x >=arr[start] && x <= arr[mid]){
                end = mid-1;
            }
            else{
               start = mid+1;
            }

        }
        else{
           if(x >=arr[mid] && x <= arr[end]){
                start = mid+1;
            }
            else{
               end = mid-1;
            }

        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int index = Search(arr,n,x);
    cout<<index<<endl;
}
