class Solution {
public:
        vector<vector<int>> res;
        vector<int> curr;
        void backtrack(vector<int>& nums, int index){

        if(index == nums.size()){
            res.push_back(curr);
            return;
        }

        curr.push_back(nums[index]);
        backtrack(nums, index + 1);
        curr.pop_back();

        backtrack(nums, index + 1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        backtrack(nums, 0);
        return res;
    }
};