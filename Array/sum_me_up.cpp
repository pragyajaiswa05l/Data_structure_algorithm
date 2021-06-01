#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int sum = 0;
    while(num != 0){
        int r = num%10;
        sum += r;
        num/=10;
    }
    cout<<sum<<endl;
}
