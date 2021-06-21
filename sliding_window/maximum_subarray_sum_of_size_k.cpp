class Solution{
public:
    int maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here
        int i = 0 ;
        int j = 0 ;
        int sum = 0;
        int max_sum = INT_MIN;
        while(j < N){
            sum = sum +Arr[j];
            if(j - i+1 != K){
                j++;
            }
            else if(j -i +1 == K){
                if(sum > max_sum){
                    max_sum = sum;
                }
                sum = sum - Arr[i];
                i++;
                j++;
            }
        }
        return max_sum;
    }
};
