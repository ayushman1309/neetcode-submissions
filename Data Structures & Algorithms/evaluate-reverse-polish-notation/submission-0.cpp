class Solution {
public:
    int Operate(int a,int b,string t){
        if(t == "+") return a+b;
        if(t == "-") return a-b;
        if(t == "*") return (long)a*(long)b;
        if(t == "/") return a/b;
        return -1;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string &t : tokens){
            if(t=="+" || t == "-" || t == "/" || t == "*"){
                // remove top 2 element and then operate
                // then push in stack the result

                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();

                int res = Operate(a,b,t);
                st.push(res);
            }else{
                st.push(stoi(t));
            }
        }
        return st.top();
    }
};