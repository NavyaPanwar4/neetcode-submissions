class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector <int> s1_counts(26, 0);
        vector <int> s2_counts(26, 0);

        int n1=s1.length();
        int n2=s2.length();

        if(n1 > n2){
            return false;
        }

        for(int i=0; i<n1; i++){
            s1_counts[s1[i] - 'a']++;
            s2_counts[s2[i] - 'a']++;
        }

        if(s1_counts == s2_counts){
            return true;
        }

        for(int i=n1; i<n2; i++){
            s2_counts[s2[i] - 'a']++;
            s2_counts[s2[i-n1] - 'a']--;

            if(s1_counts == s2_counts){
                return true;
            }
        }
        return false;
    }
};