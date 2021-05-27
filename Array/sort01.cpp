#include <iostream>
#include <algorithm>
using namespace std;

void SortZeroesAndOne(int arr[], int n){
    int i = 0;
    int j = n-1;
    for(;i < j ;){
        if(arr[i] == 0){
            i++;
        }
        if(arr[j] == 1){
            j--;
        }
        else{
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
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

		SortZeroesAndOne(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}
