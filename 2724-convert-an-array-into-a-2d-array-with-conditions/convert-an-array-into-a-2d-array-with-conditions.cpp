class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> cnt(nums.size());
        for(int num :nums) {
            if(cnt[num-1] >= ans.size()) ans.push_back({});
            ans[cnt[num-1]++].push_back(num);
        }
        return ans;
    }
};