#include<iostream>
using namespace std;
void merge (int *a ,int n , int *b,int m,int *ans){
    int k = 0 , i = 0,j = 0;
    while(i < n && j < m){
        if(a[i] > b[j]){
            ans[k] = b[j];
            k++;
            j++;
        }
        else if(a[i] <= b[j]){
            ans[k] = a[i];
            i++;
            k++;
        }
    }
    while(i < n){
        ans[k] = a[i];
        i++;
        k++;
    }
    while( j < m){
        ans[k] = b[j];
        j++;
        k++;
    }
}
int main(){
    int n;
    cin>>n;
    int *a = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    int *b = new int[n];
    for(int i = 0 ; i < m ; i++){
        cin>>b[i];
    }

    int *ans = new int[n + m];

		merge(a, n, b, m, ans);

		for (int i = 0; i < n+m ; i++)
		{
			cout << ans[i] << " ";
		}

		cout << endl;
		delete[] a;
		delete[] b;
		delete[] ans;
}
