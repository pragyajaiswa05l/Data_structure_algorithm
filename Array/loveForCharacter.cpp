#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;
    char *ch = new char[n];
    for(int  i = 0 ;i < n; i++){
        cin>>ch[i];
    }
    unordered_map<char,int>m;
    for(int i = 0; i < n ; i++ ){
        m[ch[i]] += 1;
    }

    cout<<m['a']<<" "<<m['s']<<" "<<m['p']<<endl;
}
