#include<iostream>
using namespace std;
bool checkPermutation(char a[] ,char b[]){
    int freq[256] = {0};

    for(int i = 0 ; a[i] != '\0' ; i++){
        freq[a[i]] +=1;
    }
    for(int i = 0 ; b[i] != '\0' ; i++){
        freq[b[i]] -=1;
    }
    for(int i = 0 ; i <256 ; i++){
        if(freq[i] != 0){
            return false;
        }
    }
    return true;
}
int main(){
    char input1[100];
    cin>>input1;
    char input2[100];
    cin>>input2;
    bool ans = checkPermutation(input1 ,input2);
    cout<<ans<<endl;
}


//time complexity = O(n+m)
//space complexity = O(1);
