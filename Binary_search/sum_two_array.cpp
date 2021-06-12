#include <iostream>
using namespace std;

void sumOfTwoArrays(int input1[], int size1, int input2[], int size2, int output[]){
    int i = size1-1,j=size2-1,k,carry=0,num;
   (size1>size2)?k=size1:k=size2;
    while(i>-1 && j>-1){
        num = input1[i--] + input2[j--] + carry;
        output[k--] = num % 10;
        carry =  num /10;
    }
    if(i==-1){
        while(j>-1){
            num = input2[j--] + carry;
            output[k--] = num  % 10;
            carry = num / 10;
        }
    }
   else if(j==-1){
        while(i>-1){
            num = input1[i--] + carry;
            output[k--] =num%10;
            carry = num / 10;
        }
    }
    output[k]= carry;

}


int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size1;
		cin >> size1;

		int *input1 = new int[size1];

		for (int i = 0; i < size1; ++i)
		{
			cin >> input1[i];
		}

		int size2;
		cin >> size2;

		int *input2 = new int[size2];

		for (int i = 0; i < size2; ++i)
		{
			cin >> input2[i];
		}

		int outsize = 1 + max(size1, size2);

		int *output = new int[outsize];

		sumOfTwoArrays(input1, size1, input2, size2, output);

		for (int i = 0; i < outsize; ++i)
		{
			cout << output[i] << " ";
		}

		delete[] input1;
		delete[] input2;
		delete[] output;
		cout << endl;
	}

	return 0;
}
