class Solution {
public:
    bool isValid(string s) {
        stack<char> tmp;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(')
                tmp.emplace(')');
            else if (s[i] == '[')
                tmp.emplace(']');
            else if (s[i] == '{')
                tmp.emplace('}');
            else {
                if (!tmp.empty() && tmp.top() == s[i])
                    tmp.pop();
                else
                    return false;
            }
        }
        if (!tmp.empty())
            return false;
        return true;
    }
};
