class Solution {
public:
    string reverseString(string s) {
        stack<char> mystack;
        for(int i = 0; i != s.size(); i++)
            mystack.push(s[i]);
        string res("");
        while(mystack.empty() != true){
            res += mystack.top();
            mystack.pop();
        }
        return res;
    }
};