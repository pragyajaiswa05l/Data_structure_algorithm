#include<iostream>
#include<string>
using namespace std;
string reverseString(string s){
    int i = 0 ;
    int j = s.size()-1;
    while(i<j){
        int temp = s[i];
        s[i] = s[j];
        s[j]= temp;
        i++;
        j--;
    }
    return s;
}
using namespace std;
int main(){
    string s;
    cin>>s;
    cout<<reverseString(s)<<endl;
    cout<<s<<endl;

}
