#include <iostream>
#include<unordered_map>
using namespace std;

int findUnique(int * arr, int size){
    unordered_map<int,int>m;
    for(int i  =0;i<size;i++){
        m[arr[i]] = m[arr[i]]+1;
    }
    for(int i =0;i<size;i++){
        if((m[arr[i]]) == 1){
            return arr[i];
        }
    }



}

int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		cout << findUnique(input, size) << endl;
	}

	return 0;
}


