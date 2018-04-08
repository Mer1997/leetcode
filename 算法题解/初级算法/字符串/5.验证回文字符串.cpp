class Solution {
public:
    bool isPalindrome(string s) {
        stack<char> mystack;
        queue<char> myque;
        for(int i = 0; i != s.size(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 32;
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <='9')){
                mystack.push(s[i]);
                myque.push(s[i]);
            }
        }
        while(!mystack.empty()){
            if(mystack.top() != myque.front()) return false;
            mystack.pop();
            myque.pop();
        }
        return true;
    }
};