#include<iostream>
using namespace std;
int length(char input[]){
    int l = 0;
    for(int i = 0 ; input[i] != '\0' ; i++){
        l++;
    }
    return l;
}
void reverseWords(char input[] ,int i ,int j){
    while(i < j){
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
}
void reverseWordWise(char input[]){
    //reverse the whole string
    int len = length(input);
    int i = 0 ,j = len-1;
    while(i < j){
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }

    //reverse individual word in the string
    int start = 0 ;
    int end = 0;
    for(i = 0 ; i < len ; i++){
        if(input[i] == ' '){
            end = i-1;
            reverseWords(input,start,end);
            start = i+1;
            end = i+1;
        }
    }
    end = i -1;
    reverseWords(input,start,end);
}
int main(){
    char input[100];
    cin.getline(input,100);
    reverseWordWise(input);
    cout<<input<<endl;
}
