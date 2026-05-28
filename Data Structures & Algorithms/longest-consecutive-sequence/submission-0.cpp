class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;

        for(int num : nums){
            if(numSet.find(num-1) == numSet.end()){
                int current = num;
                int streak = 1; 

                while(numSet.find(current+1) != numSet.end()){
                    current += 1;
                    streak += 1;
                }
                longest = max(longest, streak);
            }
        }
        return longest;
    }
};
