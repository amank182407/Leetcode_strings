class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> ans;
        int i=0;
        int n=nums.size();
        while(i<n)
        {   
            ans.push_back(nums[i]);
            int j=i+1;
            while(j<n)
            {
                if(nums[j]==nums[i])
                j++;
                else 
                break;
            }
            i=j;
        }
       for(int a=0;a<ans.size();a++)
       {
           nums[a]=ans[a];
       }
       return ans.size(); 
    }
};