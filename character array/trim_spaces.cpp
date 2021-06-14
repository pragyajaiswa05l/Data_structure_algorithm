#include<iostream>
using namespace std;
void trim_space(char * input){
    int j = 0;
    for(int i = 0 ; input[i] != '\0' ; i++){
        if(input[i] != ' '){
            input[j] = input[i];
            j++;
        }
    }
    input[j] ='\0';

}
int main(){
    char input[100];
    cin.getline(input , 100);
    trim_space(input);
    cout<<input<<endl;
}
