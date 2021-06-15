bool isValid(string s) {
        stack<char>st;
        int len = s.size();

        for(int i = 0;i < len ; i++){
            if(s[i] == '{' || s[i] =='(' || s[i]=='['){
                st.push(s[i]);
            }
            else if(s[i] == '}' || s[i] ==')' || s[i]==']') {
                if(st.empty()){
                    return false;
                }
                char c = st.top();
                st.pop();
                if(s[i] == ')' &&  c =='('){
                    continue;
                }
                else if(s[i] == '}' &&  c =='{'){
                    continue;
                }
                else if(s[i] == ']' &&  c =='['){
                    continue;
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty()){
            return true;
        }
        else{
           return false;
        }

    }
