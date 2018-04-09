class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        if(strs.empty()) return res;
        for(int i  = 0; i != strs[0].size(); i++){
            int j = 0;
            for(j = 0; j!= strs.size(); j++){
                if(strs[j][i] != strs[0][i]) break;
            }    
            if(j == strs.size()){
                res += strs[0][i];
            }
            else break;
        }
        
        return res;
    }
};