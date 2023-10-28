class Solution {
public:
   
    
    int sumCounts(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {   
            for(int j=i;j<n;j++)
            {   set<int> hashset;
                for(int k=i;k<=j;k++)
                {
                hashset.insert(nums[k]);
                }
            int n=hashset.size();
            sum=sum+n*n;
            } 
        }
        return sum;
        
    }
};