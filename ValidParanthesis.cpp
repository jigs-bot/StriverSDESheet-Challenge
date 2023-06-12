bool isValidParenthesis(string exp)
{
    stack<char> s;

    for(int i =0;i<exp.size();i++){
        if(exp[i]=='(')
            s.push(')');
        else if(exp[i]=='{')
            s.push('}');
        else if (exp[i]=='[')
            s.push(']');
        else{
            if(s.empty()) return false;

            if(s.top() == exp[i]){
                s.pop();
            }
            else{
                return false;
            }
        }
    }
    return s.empty();
}