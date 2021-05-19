#include<iostream>
using namespace std;
void fun(int a[],int  l){
    cout<<"fun "<<sizeof(a)<<endl;
}
int main(){
    int n[100];
    cout<<"main "<<sizeof(n)<<endl;
    fun(n,100);
}
