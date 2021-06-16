class Solution{
public:


	int lps(string s)
	{
	    // Your code goes here
	    int *LPS = new int[s.size()];
	    LPS[0] = 0;
	    int len = 0;
	    for(int i = 1 ; i < s.size() ; ){
	        if(s[len] == s[i]){
	            len++;
	            LPS[i] = len;
	            i++;
	        }
	        else{
	            if(len == 0){
	               LPS[i] = 0;
	               i++;
	            }
	            else{
	                len = LPS[len-1];
	            }
	        }
	    }
	    return LPS[s.size()-1];
	}
};
