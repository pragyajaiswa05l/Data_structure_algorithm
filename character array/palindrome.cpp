#include<iostream>
#include<string>
using namespace std;
bool is_palindrome(string s){
    int i = 0 ;
    int j = s.size()-1;
    bool flag = true;
    while(i < j){
        if(s[i] == s[j]){
            i++;
            j--;
        }
        else{
            flag = false;
            return flag;
        }
    }
    return flag;
}
int main(){
    string s;
    cin>>s;
    cout<<is_palindrome(s)<<endl;
}
