class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp(n,0);
        int pos=0,neg=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
                {temp[pos]=nums[i];
                pos=pos+2;}
                else{
                temp[neg]=nums[i];
                neg=neg+2;}
            
        }
        nums=temp;
        return nums;
    }
};