class Solution {
public:
    bool isValid(string s) {
        stack <char> valid;

        unordered_map<char, char> bracket{
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for(char c : s){
            if(bracket.count(c)){
                if(valid.empty() || valid.top() != bracket[c]){
                    return false;
                }
                valid.pop();
            }
            else{
                valid.push(c);
            }
        }
        return valid.empty();
    }
};
