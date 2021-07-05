class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        int low = 0;
        int high = n-1;
        int mid =0;
        while(low <= high){
            mid = low+(high-low)/2;
            if(arr[mid] == x){
                break;
            }
            else if(arr[mid] > x){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }

        vector<int>v;
        int l = max(0,mid-1);
        int r = l+1;
        while( l >= 0 && r < n && k >0 ){
            if(abs(arr[l]-x) <= abs(arr[r]-x)){
                v.push_back(arr[l]);
                k--;
                l--;
            }
            else{
                v.push_back(arr[r]);
                k--;
                r++;
            }
        }
        while(k >0 && l >=0){
            v.push_back(arr[l]);
                k--;
                l--;
        }
        while(k >0 && r < n){
            v.push_back(arr[r]);
                k--;
                r++;
        }
        sort(v.begin(),v.end());
        return v;

    }
};
