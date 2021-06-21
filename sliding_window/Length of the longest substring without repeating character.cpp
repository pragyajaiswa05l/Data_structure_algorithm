class Solution{
    public:
    int longestUniqueSubsttr(string S){
    // your code here
        int n = S.size();
        int i = 0;
        int j = 0;
        int max_length =-1;
        int count = 0;
        unordered_map<char,int>m;

        while(j < n){
           m[S[j]]++;

           if( m.size()  ==  j-i+1 ){
            //
            max_length = max(max_length,j-i+1);

           }
           else if( m.size()  < j-i+1){
               while( m.size() < j-i+1){
                   m[S[i]]--;
                   if(m[S[i]] == 0){
                       m.erase(S[i]);
                   }
                   i++;
               }

           }
           j++;
        }
        return max_length;


    }
};
