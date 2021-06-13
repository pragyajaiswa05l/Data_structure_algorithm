#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    char c1,c2;
    cin>>c1>>c2;

    for(int i = 0 ; s[i] != '\0' ; i++){
        if(s[i] == c1){
            s[i] = c2;
        }
    }
    for(int i = 0 ; s[i] !='\0';i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
    return 0;
}
