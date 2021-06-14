#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char input1[100] = "abcde";
    char input2[100] = "hello";

    cout<<"Before copying :";
    cout<<"input1:  "<<input1<<endl;
    cout<<"input2:  "<<input2<<endl;

    strncpy(input1 , input2, 3);

    cout<<"After copying :";
    cout<<"input1:  "<<input1<<endl;
    cout<<"input2:  "<<input2<<endl;




}
