class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto i:tokens){
            if(i == "+" || i=="-" || i=="*" || i=="/"){
                int a = st.top();st.pop();
                int b = st.top();st.pop();
                int ans;
                if(i=="+"){
                    ans=b+a;
                }
                if(i=="-") ans=b-a;
                if(i=="*") ans=b*a;
                if(i=="/") ans=b/a;
                st.push(ans);
            }else{
                st.push(stoi(i));
            }
        }
        return st.top();
    }
};