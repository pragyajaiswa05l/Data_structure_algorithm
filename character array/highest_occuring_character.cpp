#include<iostream>
using namespace std;
char freq(char input[]){
    int freq[256]= {0};
    for(int i = 0 ; input[i] != '\0' ; i++){
        freq[input[i]] +=1;
    }
    int max = 0 ;
    char ans;
    for(int i = 0 ;input[i] != '\0' ; i++){
        int index = input[i];
        if(freq[index] > max){
            max = freq[index];
            ans = input[i];
        }
    }
    return ans;
}
int main(){
    char input[100];
    cin>>input;
    char ans = freq(input);
    cout<<ans<<endl;
}
