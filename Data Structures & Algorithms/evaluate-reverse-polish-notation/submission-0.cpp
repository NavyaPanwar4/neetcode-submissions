class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> rpn;

        for(string token : tokens){
            if(token=="+"||token=="-"||token=="*"||token=="/"){
                int a = rpn.top();
                rpn.pop();

                int b = rpn.top();
                rpn.pop();

                if(token=="+"){
                    rpn.push(b+a);
                }
                else if(token=="-"){
                    rpn.push(b-a);
                }
                else if(token=="*"){
                    rpn.push(b*a);
                }
                else{
                    rpn.push(b/a);
                }
            }
            else{
                rpn.push(stoi(token));
            }
        }
        return rpn.top();
    }
};
