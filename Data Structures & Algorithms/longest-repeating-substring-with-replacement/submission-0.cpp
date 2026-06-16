class Solution {
public:
    int characterReplacement(string s, int k) {
        int longest = 0;
        int l = 0;
        vector<int> counts(26, 0);

        for (int r = 0; r < s.size(); r++) {
            counts[s[r] - 'A']++;

            while ((r - l + 1) - *max_element(counts.begin(), counts.end()) > k) {
                counts[s[l] - 'A']--;
                l++;
            }

            longest = max(longest, r - l + 1);
        }

        return longest;
    }
};
