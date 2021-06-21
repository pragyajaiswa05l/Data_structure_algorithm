class Solution{
public:
	int search(string pat, string txt) {
	    // code here

	    //Creating map of pat
	    unordered_map<char,int>m;
	    for(int i = 0 ; i < pat.size() ; i++){
	        m[pat[i]] +=1;
	    }
	    //Counts all distinct elements in map
	    int count = m.size();


	    int ans = 0;
	    int j = 0;
	    int i = 0;
	    //int n =txt.size();
	    while(j < txt.size()){
        //If a charcter is present in map
			if(m.find(txt[j]) != m.end()){
	           //Decrease the count of charcter from map m
	           m[txt[j]] -=1;
               //Decrease count if all chracters are used
	           if(m[txt[j]] == 0){
	                count--;
	        }
	       }
	       //if(m[txt[j]] == 0){
	       //    count--;
	       //}

	       //If window size is not reached
	       if(j-i+1 < pat.size()){
	           j++;
	       }
	       else if(j-i+1 == pat.size()){
                //count=0 shows that all elements are used completely
	           if(count == 0){
	               ans +=1;
	           }

               //Calculation to increase i
	           if(m.find(txt[i]) != m.end()){
	               m[txt[i]] +=1;
	               if(m[txt[i]] == 1){
	                    count++;
	                }
	           }

               //Increasing window size
	           i++;
	           j++;
	       }
	    }
	    return ans;
	}

};
