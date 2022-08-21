//jitte W aayenge window mai utte W haatane pdenge 
int minimumRecolors(string blocks, int k) {
    int i=0,j=0;
    int white=0;
    int n=blocks.size();
    int ans=INT_MAX;
    while(j<n)
    {
        if(j-i+1<k)
        {
            if(blocks[j]=='W')
            white++;
        }
        else if(j-i+1==k)   
        {
            //jb window size hit krega tb firse check krnege na j ko
            if(blocks[j]=='W')
            white++;
            ans=min(ans,white);
            if(blocks[i]=='W')
            white--;
            i++;
        }
        j++;
    }
    if(ans==INT_MAX)
        return 0;
return ans;
}
