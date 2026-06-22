class Solution {
public:
    
    bool eatAll(vector<int>& piles, int mid, int h){
        int hours = 0;

        for(int p : piles){
            hours += (p+mid-1)/mid;
        }
        return hours<=h;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*max_element(piles.begin(), piles.end());

        while(l<r){
            int mid=l+(r-l)/2;
            if (eatAll(piles, mid, h)){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};