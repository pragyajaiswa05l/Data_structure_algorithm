#include<iostream>
using namespace std;
void removeConsecutiveDuplicates(char *input){
    int j = 1;
    char lastchar = input[0];
    for(int i = 1 ; input[i] !='\0' ; i++){
        if(input[i] != lastchar){
            input[j] = input[i];
            lastchar = input[j];
            j++;
        }
    }
    input[j] = '\0';
    return;
}
int main(){
    char input[100];
    cin>>input;
    removeConsecutiveDuplicates(input);
    cout<<input<<endl;
}
