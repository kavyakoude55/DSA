class Solution {
public:
    int minAddToMakeValid(string s) {
        string st;
        for(char x: s){
            if(x == '('){
                st.push_back(x);
            }
            else if(x == ')' && (!st.empty() && st.back() == '(')){
                st.pop_back();
            }
            else{
                st.push_back(x);
            }
        }
        return st.size();
    }
};