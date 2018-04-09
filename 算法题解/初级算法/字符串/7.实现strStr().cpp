class Solution {
public:
    int strStr(string haystack, string needle) {
        int dex = 0;
        if(needle.size() > haystack.size()) return -1;
        if(haystack.size() == 0) return 0;
        int j = haystack.size() - dex;
        while(j >= needle.size()){
            int cur = 0;
            while(cur != needle.size()){
                if(haystack[dex + cur] != needle[cur])
                    break;
                else cur++;
            }
            if(cur == needle.size())
                return dex;
            else{
                dex ++;
                j--;
            }
        }
        return -1;
    }
};