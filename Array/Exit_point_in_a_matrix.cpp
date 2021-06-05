#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int **a = new int*[n];
    for(int i = 0 ;i < n; i++){
        a[i] = new int[m];
        for(int j = 0 ; j<m ;j++){
            cin>>a[i][j];
        }
    }
    int dir = 0;
		int i = 0;
		int j = 0;
		int r = n;
		int c = m;
		//vector<int>v;
		while(true){
		    dir = (dir+a[i][j])%4;
		    if(dir == 0){
		        j++;
		    }
		    else if(dir == 1){
		        i++;
		    }
		    else if(dir == 2){
		        j--;
		    }
		    else if(dir == 3){
		        i--;
		    }
		    if(i<0){
		        i++;
		        break;
		    }
		    else if(j<0){
		        j++;
		        break;
		    }
		    else if(i == r){
		        i--;
		        break;
		    }
		    else if(j == c){
		        j--;
		        break;
		    }
		}
		cout<<i<<" "<<j<<endl;


    }


