#include<unordered_map>
class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        unordered_map<char,int>m;

        m.insert({'I',1});
        m.insert({'V',5});
        m.insert({'X',10});
        m.insert({'L',50});
        m.insert({'C',100});
        m.insert({'D',500});
        m.insert({'M',1000});



        for(int i=s.length()-1;i>=0;i--){

                if(i==s.length()-1){
                    sum=sum+m[s[i]];
                }
                else{
                    if(m[s[i]]<m[s[i+1]]){
                        sum=sum-m[s[i]];

                    }
                    else{
                        sum=sum+m[s[i]];
                    }
                }
            }

        return sum;

    }
};

//Symbol       Value
/*I             1
V             5
X             10
L             50
C             100
D             500
M             1000*/
