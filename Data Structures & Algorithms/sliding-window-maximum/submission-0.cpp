class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        int n=nums.size();

        for(int i=0; i<=n-k; i++){
            int maximum=nums[i];
            for(int j=i; j<i+k; j++){
                maximum=max(maximum, nums[j]);
            }
            res.push_back(maximum);
        }
        return res;
    }
};
