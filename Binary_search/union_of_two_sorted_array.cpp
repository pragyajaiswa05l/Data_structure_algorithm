class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays.
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int>result;
        int i ;//iterating the array1
        int j ; //iterating the array2
        int k = result.size();//vector index
        for(i = 0 ,j =0; i < n && j < m; ){
            if(arr1[i] == arr2[j]){
                if(k==0){
                   result.push_back(arr1[i]);
                    k++;
                }
                else if( k > 0 && result[k-1] != arr1[i]){
                    result.push_back(arr1[i]);
                    k++;
                }
                i++;
                j++;
            }



            else if(arr1[i] < arr2[j]){
                if( k > 0 && result[k-1] != arr1[i]){
                    result.push_back(arr1[i]);
                    k++;
                }
                else if(k == 0){
                    result.push_back(arr1[i]);
                    k++;
                }
                i++;
            }
            else if(arr1[i] > arr2[j]){
                if( k > 0 && result[k-1] != arr2[j]){
                    result.push_back(arr2[j]);
                    k++;
                }
                else if( k == 0){
                    result.push_back(arr2[j]);
                    k++;
                }
                j++;
            }
        }

        for( ; i < n;i++){
            if(result[k-1] != arr1[i]){
                result.push_back(arr1[i]);
                k++;
            }
        }
        for( ; j < m;j++){
            if(result[k-1] != arr2[j]){
                result.push_back(arr2[j]);
                k++;
            }
        }
        return result;







        //Another solution for the problem

        /*map<int,int>mp;
        for(int i = 0 ; i < n; i++){
            mp[arr1[i]] +=1;
        }
        for(int i = 0 ; i < m ; i++){
            mp[arr2[i]] +=1;
        }
        vector<int> result;
        for(auto it = mp.begin() ; it!=mp.end() ; it++){
            result.push_back(it->first);
        }
        return result;*/
    }
};
