#include<iostream>
using namespace std;
void removeCharacterC(char input[] , char c){
    int j = 0 ;
    for(int i = 0 ; input[i] != '\0' ; i++){
        if(input[i] != c){
            input[j] = input[i];
            j++;
        }
    }
    input[j] = '\0';
    return;
}
int main(){
    char input[100];
    cin>>input;
    char c;
    cin>>c;
    removeCharacterC(input,c);
    cout<<input<<endl;
}
