double findMaxAverage(vector<int>& nums, int k) {
        int i=0,j=0;
        double sum=0;
        double ans=INT_MIN;
        int n=nums.size();
        while(j<n) 
        {
            //length=j-i+1
            sum+=nums[j];
            if(j-i+1<k)   
              j++;
            else if(j-i+1 == k)
            {
                double avg=sum/k;
                ans=max(ans,avg);
                sum-=nums[i];
                i++;
                j++;
            }
        }
        return ans;
    }
