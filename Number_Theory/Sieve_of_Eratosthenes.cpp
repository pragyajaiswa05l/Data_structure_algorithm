#include<bits/stdc++.h>
using namespace std;

void isprime(int n){
    bool *prime=new bool[n+1];//as we start our index from 0
    prime[0]=false;
    prime[1]=false;
    for(int i=2;i<=n;i++){
        prime[i]=true;
    }

    for(int i=2;i*i<=n;i++){
        if(prime[i]==true){
            for(int j=i*i;j<=n;j=j+i){
                prime[j]=false;
            }
        }
    }
    int count=0;//total number of prime number
    for(int i=0;i<=n;i++){
        if(prime[i]==true){
            count++;
            cout<<i<<" ";
        }
    }
    cout<<endl;
    cout<<"Total number of prime number is "<<count<<endl;
}
int main(){
    int n;// upto where we need to find our prime number
    cin>>n;
    isprime(n);

}


/*INPUT
36

OUTPUT
2 3 5 7 11 13 17 19 23 29 31
Total number of prime number is 11  */
