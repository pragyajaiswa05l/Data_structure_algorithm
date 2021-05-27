#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    vector<string>s;
    string name;
    while( cin >> name){
        s.push_back(name);
    }

    unordered_map<string,int>m;
    for(int i =0 ; i < s.size() ; i++){
        m[s[i]] +=1;
    }
    bool flag = false;
    for(auto i = m.begin() ; i != m.end() ; i++){
        if(i->second > 1){
            cout<<i->first<<" "<<i->second<<endl;
            flag = true;
        }
    }
    if(flag == false){
        cout<<"-1"<<endl;
    }
}
