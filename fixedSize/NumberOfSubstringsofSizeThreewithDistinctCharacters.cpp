int countGoodSubstrings(string s)
{
		int i = 0, j = 0;
		int n = s.size();
		int ans = 0;
    while(j < n)
    {
         if(j-i+1<3)
            j++;
	       else if(j-i+1 == 3)
         {
		        string temp = s.substr(i, 3);
		        map<char, int> mp;
		        for(int i=0;i<temp.length();i++)
			          mp[temp[i]]++;
		        if(mp.size() == 3)
			          ans++;
		        i++;j++;
	        }
      }
      return ans;
  }
