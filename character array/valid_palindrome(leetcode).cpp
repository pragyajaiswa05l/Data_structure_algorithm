bool isPalindrome(string s) {
    int i=0;
    int j=s.length()-1;
    while(i<j){
        if(!isalpha(s[i]) && !isdigit(s[i])){
            i++;
            continue;
        }
        else if(!isalpha(s[j]) && !isdigit(s[j])){
            j--;
            continue;
        }
        else if(tolower(s[i])!=tolower(s[j])){
            return false;
        }
        i++;
        j--;

    }
    return true;
}

//isalpha(c) is a function in C which can be used to check if the passed character is an alphabet or not. It returns a non-zero value if it’s an alphabet else it returns 0. For example, it returns non-zero values for ‘a’ to ‘z’ and ‘A’ to ‘Z’ and zeroes for other characters.
//Similarly, isdigit(c) is a function in C which can be used to check if the passed character is a digit or not. It returns a non-zero value if it’s a digit else it returns 0. For example, it returns a non-zero value for ‘0’ to ‘9’ and zero for others.
