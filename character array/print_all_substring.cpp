#include<iostream>
#include<string>
using namespace std;
void printSubstring(char s[]){
    for(int j = 0 ; s[j] !='\0' ; j++){
        for(int k = j ; s[k] !='\0' ;k++){
            int start = j;
            int end = k;
            int x =0;
            char output[100];
            for(int i = start ; i <=end ;i++){
                output[x] = s[i];
                x++;
            }
            output[x] = '\0';
            cout<<output<<endl;
        }
    }
}
int main(){
    char input[100];
    cin>>input;
    printSubstring(input);
}
