class Solution{
    public:
    int longestKSubstr(string s, int k) {
    // your code here
        int n = s.size();
        int i = 0;
        int j = 0;
        int max_length =-1;
        int count = 0;
        unordered_map<char,int>m;

        while(j < n){
           m[s[j]] +=1;

           if(  m.size() < k){
               j++;
           }
           else if( m.size()  == k ){
               if(max_length < j-i+1){
                   max_length = j-i+1;
               }
               j++;
           }
           else if( m.size() > k){
               while( m.size() > k){
                   m[s[i]] -=1;
                   if(m[s[i]] == 0){
                       m.erase(s[i]);
                   }
                   i++;
               }
               j++;
           }
        }
        return max_length;
    }
};

