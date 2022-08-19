vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
    long long i=0,j=0;
    vector<long long>ans;
    queue<long long>q;
    while(j<N)
    {
        if(A[j]<0)
           q.push(A[j]);
        if(j-i+1<K)
          j++;
        else if(j-i+1==K)
        {
            if(q.empty())
              ans.push_back(0);
            else
              ans.push_back(q.front());
            if(A[i]<0)
               q.pop();
               i++;j++;
         }
    }
    return ans;
 }
