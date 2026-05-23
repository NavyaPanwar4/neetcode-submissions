class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {

        map<int, int> counts;

        for(int num : nums){
            counts[num]++;
        }

        int i = 0;

        for(auto& [num, frequency] : counts){
            while(frequency>0){
                nums[i++] = num;
                frequency--;
            }
        }
        
        return nums;
    }
};