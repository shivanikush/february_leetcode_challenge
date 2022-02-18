string removeKdigits(string num, int k) {
        string ans="";
        for(auto &i:num)
        {
            while(ans.size() && ans.back()>i && k)
            {
                ans.pop_back();
                k--;
            }
            if(ans.size() || i!='0')ans.push_back(i);
        }
        while(k-- && ans.size())ans.pop_back();
        return ans.size()?ans:"0";
    }

//another method
string removeKdigits(string num, int k) {
       string ans = "";                                         // treat ans as a stack in below for loop
       
       for (char c : num) {
           while (ans.length() && ans.back() > c && k) {
               ans.pop_back();                                  // make sure digits in ans are in ascending order
               k--;                                             // remove one char
           }
           
           if (ans.length() || c != '0') { ans.push_back(c); }  // can't have leading '0'
       }
       
       while (ans.length() && k--) { ans.pop_back(); }          // make sure remove k digits in total
       
       return ans.empty() ? "0" : ans;
}

//using stacks
