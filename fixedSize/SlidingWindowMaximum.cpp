
Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
Output: [3,3,5,5,6,7]

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n =nums.size();
        priority_queue<int> pq;
        int s=0,e=k-1; //initial window
        for(int i=s;i<=e;i++){ // for the first window
            pq.push(nums[i]);
        }
        vector<int> ans; // to store Sliding Window Maximum.
        unordered_map<int,int> mp;
        while(e<n){
            // pq.top is in the map that means the starting point of one of the previous windows was maximum in that window.
            while(mp.find(pq.top()) != mp.end()){ 
                // if it has one occurence then we'll remove it form map or otherwise we'll decrease it's count.
                if(mp[pq.top()]==1)mp.erase(pq.top()); 
                else mp[pq.top()]--;
                pq.pop();
            }
            ans.push_back(pq.top());
            // here we are adding starting point in map as we will use it in next iteration to check that if it was the maximum of previous window we can delete it, then only we will get the maximum of current window.
            mp[nums[s]]++; 
            s++; 
            e++; //below if condition
            //here we are adding the next windows last element
            if(e<n) pq.push(nums[e]);
        }
        return ans;
    }
