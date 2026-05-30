class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty()) return 0;

        int left = 0;
        int right = height.size()-1;

        int leftHigh = 0;
        int rightHigh = 0;
        int water = 0;

        while(left<right){
            if(height[left]<height[right]){
                if(height[left]>=leftHigh){
                    leftHigh=height[left];
                }
                else{
                    water+=leftHigh-height[left];
                }
                left++;
            }
            else{
                if(height[right]>=rightHigh){
                    rightHigh=height[right];
                }
                else{
                    water+=rightHigh-height[right];
                }
                right--;
            }
        }
        return water;
   }
};
