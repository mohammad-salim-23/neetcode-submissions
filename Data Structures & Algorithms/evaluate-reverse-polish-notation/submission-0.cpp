class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
 
        int sum = 0;
        for(int i=0;i<tokens.size();i++){
            string s  = tokens[i];
            if(s=="+"|| s=="-"||s=="*"||s=="/"){
                int num2 = st.top();st.pop();
                int num1 = st.top(); st.pop();
                int res = 0;
                if(s=="+") res = num1+num2;
                else if(s=="-") res = num1-num2;
                else if(s=="*") res = num1*num2;
                else if(s=="/") res = num1/num2;
                st.push(res);
            }else{
                st.push(stoi(s));
            }
        }
        return st.top();
    }
};
