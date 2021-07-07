class Solution {
public:
    bool isvalid(vector<int>&piles,int banana_can_be_eatten,int h){
        int time_sum = 0;
        for(int i =0 ; i < piles.size();i++){
            time_sum += (int)ceil(piles[i]*1.0/banana_can_be_eatten*1.0);
            if(time_sum > h){
                return false;
            }
        }
        return true;
        //return time_sum <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {


        int max_ele = INT_MIN;
        int min_ele = INT_MAX;

        for(int i = 0 ; i < piles.size() ; i++){
            if(piles[i] > max_ele){
                max_ele = piles[i];
            }
            if(piles[i] < min_ele){
                min_ele = piles[i];
            }
        }
        if(h == piles.size()){
            return max_ele;
        }
        int low =1;
        int high = max_ele;
        int min_speed = INT_MAX;

        while(low <= high){
            int mid = low+(high-low)/2;
            if(isvalid(piles,mid,h)){
                if(min_speed > mid){
                    min_speed = mid;
                }
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return min_speed;


    }
};
