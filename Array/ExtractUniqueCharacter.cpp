#include<iostream>
#include<set>
#include<cstring>
using namespace std;

int main(){
    string str;
    cin>>str;
    string ans;
    set<char>s;

    int n = str.size();
    for(int i = 0 ; i < n ; i++){
        if(s.find(str[i]) == s.end()){
            s.insert(str[i]);
            ans.push_back(str[i]);

        }
    }

    cout<<ans<<endl;

}
