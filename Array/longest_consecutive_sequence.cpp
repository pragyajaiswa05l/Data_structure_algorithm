#include <vector>
#include<iostream>
#include<unordered_map>
using namespace std;

vector<int> longestConsecutiveIncreasingSequence(int *arr, int n){
	//Your Code goes here
    unordered_map<int,bool>visited;
    unordered_map<int,int>elementtoindex;

    for(int i = 0 ; i < n ; i++){
        visited[arr[i]] = true;
        elementtoindex[arr[i]] = i;
    }

    vector<int>sequence;
    int globalmaxlengthSequence = 1;
    int globalstartindex = 0;

    for(int i = 0 ;i< n; i++){
        int num = arr[i];
        int count = 0;
        int tempnum = num;
        int currentindex = i;

        //forward
        while(visited.count(tempnum) == 1 && visited[tempnum] == true){
            visited[tempnum] = false;
            count++;
            tempnum++;
        }

        // backward
        tempnum = num-1;
        while(visited.count(tempnum) == 1  && visited[tempnum] ==  true){
            visited[tempnum] = false;
            count++;
            currentindex = elementtoindex[tempnum];
            tempnum--;
        }

        if(count > globalmaxlengthSequence){
            globalmaxlengthSequence = count;
            globalstartindex = currentindex;

        }
        else if(count == globalmaxlengthSequence){
            if(currentindex < globalstartindex){
                globalstartindex = currentindex;
            }
        }
    }
    int globalstartnum = arr[globalstartindex];
    sequence.push_back(globalstartnum);
    if(globalmaxlengthSequence > 1){
        sequence.push_back(globalstartnum + globalmaxlengthSequence -1);
    }
    return sequence;

}

int main() {
    int size;
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    vector<int> ans = longestConsecutiveIncreasingSequence(arr, size);

    cout << ans[0];
    if (ans.size() > 1) {
        cout << " " << ans[ans.size() - 1];
    }

    delete[] arr;
}
