#include<iostream>
using namespace std;
int main(){
    char input[100];
    cin.getline(input,100);
    cout<<input<<endl;
    cin.getline(input,5);
    cout<<input<<endl;
}
//inorder to print a sentence we can use cin.getline function in place of cin.It takes 3 arguement (string name , len , delimiter).
