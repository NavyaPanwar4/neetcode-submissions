class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int, int> counts;

        for(int num : nums){
            counts[num]++;
        }

        int i = 0;

        for(auto& [num, freq] : counts){
            while(freq>0){
                nums[i++] = num;
                freq--;
            }
        }
        return;
    }
};