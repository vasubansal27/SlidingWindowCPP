Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3
  
  int lengthOfLongestSubstring(string s){
        unordered_map<char,int>mp;
        int i=0,j=0,res=0;
        while(j<s.length())
        {
            mp[s[j]]++;
            if(mp.size()<j-i+1)
            {
                while(!mp.empty() && mp.size()<j-i+1){
                    mp[s[i]]--;
                    if(mp[s[i]]==0) mp.erase(s[i]);
                    i++;
                }
                j++;
            }
            else if(mp.size()==j-i+1){
                res=max(res,j-i+1);
                j++;
            }
        }
        return res;
    }
