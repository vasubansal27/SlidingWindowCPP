Input:
S = "aabacbebebe", K = 3
Output: 7

int longestKSubstr(string s, int k) {
    // your code here
    int i=0,j=0;
    int ans=INT_MIN;
    unordered_map<char,int>mp;
    int n=s.length();
    while(j<n)
    {
        mp[s[j]]++;
        if(mp.size()<k)
           j++;
        else if(mp.size()==k)
        {
            ans=max(ans,j-i+1);
            j++;
        }
        else
        {
            while(mp.size()>k)
            {
                mp[s[i]]--;
                if(mp[s[i]]==0)
                    mp.erase(s[i]);
                i++;    
            }
            j++;
        }
    }
    if(ans==INT_MIN)
        return -1;
    return ans;    
    }
