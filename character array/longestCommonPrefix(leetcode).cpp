class Solution {
public:
    string commonprefix(string prefix,string str){
        int l1=prefix.length();
        int l2=str.length();

        string final="";

        for(int i=0,j=0;i<l1 &&j<l2;i++,j++){
            if(prefix[i]==str[j]){
                final+=prefix[i];
            }
            else{
                break;
            }
        }
        return final;
    }

    string longestCommonPrefix(vector<string>& strs) {

        int n=strs.size();
        if(n<1){
            return "";
        }
        string prefix=strs[0];
        for(int i=1;i<strs.size();i++){
            prefix=commonprefix(prefix,strs[i]);
        }
        return prefix;
    }
};
