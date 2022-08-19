vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
        int i=0,j=0;
        vector<int>ans;
        unordered_map<int,int>mp;
        while(j<n)
        {
            mp[A[j]]++;
            if(j-i+1<k)
               j++;
            else if(j-i+1==k)
            {
                ans.push_back(mp.size());
                mp[A[i]]--;
                if(mp[A[i]]==0)
                   mp.erase(A[i]);
                i++;
                j++;
            }
        }
        return ans;
    }
