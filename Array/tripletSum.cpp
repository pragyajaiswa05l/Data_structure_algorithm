#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int x ;
    cin>>x;
    sort(arr,arr+n);
    for(int i = 0 ; i < n-1 ;i++){
        int l = i+1;
        int r = n-1;
        while(l<r){
            if(arr[i]+arr[l]+arr[r] == x){
               int count1 = 0, count2 = 0;
               for(int ptr = l ;ptr <= r ;ptr++){
                if(arr[ptr] ==  arr[l]){
                    count1++;
                }
                else{
                    break;
                }
               }
               for(int ptr = r ; ptr>=l ;ptr--){
                if(arr[ptr] == arr[r]){
                    count2++;
                }
                else{
                    break;
                }
               }
               int combination = count1*count2;
               if(arr[l] == arr[r]){
                combination = ((r-l+1)*(r-l))/2;
               }
               for(int k = 0 ; k < combination ; k++){
                    cout<<arr[i]<<" "<<arr[l]<<" "<<arr[r]<<endl;
               }
               l= l+count1;
               r = r-count2;
            }
            else if(arr[i]+arr[l]+arr[r] > x){
                r--;
            }
            else{
                l++;
            }
        }
    }

}
