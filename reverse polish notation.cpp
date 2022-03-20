class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
        stack<string> stk;
        auto getTopTwo = [&]() 
        {
            string a = stk.top();
            stk.pop();
            string b = stk.top();
            stk.pop();
            return make_pair(stoi(a), stoi(b));
        };
        for (int i = 0; i < tokens.size(); ++i) 
        {
            //number can also be -ve/+ve, in that case it would -11, -22, +22 etc
            if (isdigit(tokens[i][0]) || (tokens.size() > 1 && isdigit(tokens[i]                        [1]))) {
                stk.push(tokens[i]);
            }
            else 
            {
                int result;
                pair<int, int> x = getTopTwo();
                if (tokens[i] == "+") 
                {
                    result = x.first + x.second;
                } 
                else if (tokens[i] == "-") 
                {
                    result = x.second - x.first;
                } else if (tokens[i] == "*") 
                {
                    result = x.first * x.second;
                } else {
                    result = x.second / x.first;
                }
                stk.push(to_string(result));
            }
        }
        return stoi(stk.top());
    }
};
