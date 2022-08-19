int search(string pat, string txt) {
	    // code here
	    int ans=0;
	    int k=pat.length();
	    int n=txt.length();
	    unordered_map<char,int>mp;
	    for(int i=0;i<k;i++)
	        mp[pat[i]]++;
	    int i=0,j=0;
	    int count=mp.size();
	    while(j<n)
	    {
	        mp[txt[j]]--;
	        if(mp[txt[j]]==0)
	           count--;
	        if(j-i+1<k)
                j++;
            else if(j-i+1==k)
            {
                if(count==0)
                   ans++;
                mp[txt[i]]++;
                if(mp[txt[i]]==1)
                   count++;
                i++;
                j++;
            }
	    }
	    return ans;
	}
