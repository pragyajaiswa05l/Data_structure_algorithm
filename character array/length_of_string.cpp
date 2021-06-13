#include<iostream>
using namespace std;
int len(char *name){
    int count = 0 ;
    for(int i = 0 ; name[i] !='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[100];
    cin>>name;
    cout<<len(name)<<endl;
}
